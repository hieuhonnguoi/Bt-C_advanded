#include <stdio.h>
#include <string.h>

int main(){
    int a[100];
    int max = -100000000;
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    printf("Input value: ");
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
  
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}