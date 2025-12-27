#include <stdio.h>

int main() {
    void *p;
    printf("Size int = %zu\n", sizeof(*(int*)p));
    return 0;
}
