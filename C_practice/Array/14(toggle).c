#include <stdio.h>
#include <string.h>

int main(){
    int arr[100];
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    printf("Input value: ");
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
  
   for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("Mang sau khi dao nguoc: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}