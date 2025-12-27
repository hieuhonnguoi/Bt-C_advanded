#include <stdio.h>
#include <string.h>

int main(){
    int a[100];
    int k,x,n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    printf("Input x: ");
    scanf("%d", &x);

    printf("Input k: ");
    scanf("%d", &k);

    printf("Input value: ");
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
  
    for (int i = n; i > k; i--){
        a[i] = a[i-1];
    }

    a[k] = x;
    n++;

    for (int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}