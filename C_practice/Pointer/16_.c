#include <stdio.h>

int main() {
    int a[5] = {1,2,3,4,5};
    int *p = a;

    printf("%d\n", *(p + 1)); // phần tử thứ 1
    return 0;
}