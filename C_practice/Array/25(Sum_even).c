#include <stdio.h>

int main() {
    int a[100];
    int n;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int sum = 0;

    for (int i = 0; i < n; i+=2){
        sum += a[i];
    }

    printf("Sum of pos even: %d\n",sum);
    return 0;
}
