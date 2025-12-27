#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "Hello world";
    char *l = s;
    char *r = s + strlen(s) - 1;

    while(l < r) {
        char t = *l;
        *l = *r;
        *r = t;
        l++; r--;
    }

    printf("%s\n", s);
    return 0;
}