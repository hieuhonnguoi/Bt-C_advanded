#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;

    printf("Gia tri cua x: %d\n",x);
    printf("Dia chi cua x: %p\n", &x);
    printf("Gia tri qua con tro: %d\n", *p);
    printf("Dia chi con tro: %p\n", p);

    return 0;
}