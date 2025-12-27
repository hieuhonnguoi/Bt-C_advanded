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

    int isSymmetric = 1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { 
            if (a[i][j] != a[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric)
            break;
    }

    if (isSymmetric)
        printf("=> Ma tran doi xung.\n");
    else
        printf("=> Ma tran KHONG doi xung.\n");

    return 0;
}
