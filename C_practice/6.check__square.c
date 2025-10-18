#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(unsigned int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main(){
    unsigned int n;
    printf("Input value n: \n");
    scanf("%d",&n);

    if (isPowerOfTwo(n)){
        printf("Is power of two\n");
    } else {
        printf("Is not power of two\n");
    }
    return 0;
}