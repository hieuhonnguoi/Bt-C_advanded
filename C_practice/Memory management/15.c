#include <stdio.h>
#include <string.h>

void myfunction(char *q) {
    memcpy(q, "hello", 65); 
}

int main(void) {
    char *p;     // cấp đủ bộ nhớ
    myfunction(p);
    printf("%s\n", p);
    return 0;
}