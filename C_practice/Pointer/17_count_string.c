#include <stdio.h>

int main(){
    char s[] = "Hello";
    int *p = s;
    int cnt = 0;
    while (*p != '\0'){
        cnt++;
        p++;
    }

    printf("%d\n",cnt);
}