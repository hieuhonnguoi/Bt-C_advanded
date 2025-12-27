#include <stdio.h>
#include <string.h>

void swap(void *a, void *b, size_t size) {
    char tmp[size];
    memcpy(tmp, a, size);
    memcpy(a, b, size);
    memcpy(b, tmp, size);
}

int main() {
    int x=5, y=7;
    swap(&x, &y, sizeof(int));
    printf("%d %d\n", x, y);
    return 0;
}
