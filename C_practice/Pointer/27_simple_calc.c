#include <stdio.h>

int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}

int main() {
    int (*calc)(int,int);
    calc = add;
    printf("%d\n", calc(3,4));
    return 0;
}
