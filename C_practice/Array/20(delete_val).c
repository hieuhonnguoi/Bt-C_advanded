#include <stdio.h>
#include <string.h>

int main(){
    int a[100];
    int max = -100000000;
    int count = 0;
    int k,n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    printf("Input k: ");
    scanf("%d", &k);

    printf("Input value: ");
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
  
    for (int i = k; i < n; i++){
        a[i] = a[i+1];
    }
    for (int i = 0; i < n-1; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}