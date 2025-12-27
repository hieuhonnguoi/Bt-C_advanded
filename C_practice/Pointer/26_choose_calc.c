#include <stdio.h>

int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}
int mul(int a, int b){return a*b;}
int div(int a, int b){return a/b;}

int main(){
    int (*f[])(int, int) = {add,sub,mul,div};
    char op = '+';
    printf("%d\n",f[0](5,3));
    return 0;
}