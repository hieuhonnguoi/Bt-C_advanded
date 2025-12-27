#include <stdio.h>
#include <string.h>

int main(){
    int arr[100];
    int brr[100];
    int crr[100];
    int sum = 0;
    int a,b;
    printf("Nhap so phan tu cua a: ");
    scanf("%d", &a);
    printf("Nhap so phan tu cua b: ");
    scanf("%d", &b);
    printf("Input value of a: ");
    for (int i = 0; i < a; i++){
        scanf("%d",&arr[i]);
    }
    printf("Input value of b: ");
    for (int i = 0; i < b; i++){
        scanf("%d",&brr[i]);
    }

    for (int i = 0; i < a; i++){
        crr[i] = arr[i];
    }
    for (int i = 0; i < b; i++){
        crr[i+a] = brr[i];
    }
    for (int i = 0; i < a+b; i++){
        printf("%d ",crr[i]);
    }
    printf("\n");
    return 0;
}