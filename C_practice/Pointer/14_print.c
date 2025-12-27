#include <stdio.h>

void nhapMang(int *a, int n) {
    for(int i = 0; i < n; i++)
        scanf("%d", a + i);
}

int main() {
    int a[5];
    nhapMang(a, 5);

    for(int i = 0; i < 5; i++)
        printf("%d ", a[i]);

    return 0;
}