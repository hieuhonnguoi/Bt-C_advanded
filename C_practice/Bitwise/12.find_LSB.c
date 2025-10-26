#include <stdio.h>

int find_LSB(unsigned int n){
    if (n == 0) return -1;
    int pos = 0;
    while((n & 1) == 0){
        n >>= 1;
        pos++;
    }
    return pos;
}

int main(){
    unsigned int n;
    printf("Input value n: \n");
    scanf("%d",&n);

    if (find_LSB(n) >= 0){
        printf("LSB of %d: %d\n",n,find_LSB(n));
    } else {
        printf("No bit set\n");
    }
    
    return 0;
}