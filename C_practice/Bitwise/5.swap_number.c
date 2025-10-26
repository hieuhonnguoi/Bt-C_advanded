#include <stdio.h>

int main(){
    unsigned int a;
    unsigned int b;
    printf("Input value a: \n");
    scanf("%d",&a);
    printf("Input value b: \n");
    scanf("%d",&b);

    a ^= b;
    b ^= a;
    a ^= b;

    printf("a = %d\n",a);
    printf("b = %d\n",b);
    return 0;
}