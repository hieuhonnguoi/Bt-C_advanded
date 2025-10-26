#include <stdio.h>

unsigned char Add(unsigned char a, unsigned char b) {
    return (a + b);
}

int main(){
    unsigned char a = 5;
    unsigned char b = 3;

    printf("%d \n",Add(a,b));
    return 0;
}