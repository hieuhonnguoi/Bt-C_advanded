#include <stdio.h>

int main() {
    int a[100][100];
    int n;

    printf("Nhap cac phan tu: ");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3;j++){
            scanf("%d", &a[i][j]);
        }
    }

    int sum = 0;

    for (int i = 0; i < 3; i++){
        sum += a[i][i];
    }

    printf("Sum of pos even: %d\n",sum);
    return 0;
}
