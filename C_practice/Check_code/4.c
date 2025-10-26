#include <stdio.h>

int divide(int a, int b)
{
    return b / a;
}

int main(){
    int a = 5;
    int b = 3;

    printf("%d ",divide(a,b));
    return 0;
}