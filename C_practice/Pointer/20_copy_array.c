#include <stdio.h>

int main(){
    char scr[] = "Hello world";
    char dst[20];
    char *s = scr;
    char *d = dst;
    
    while ((*d++ = *s++) != '\0');

    printf("%s\n",dst);
    return 0;
}