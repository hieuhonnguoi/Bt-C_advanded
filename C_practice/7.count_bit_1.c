#include <stdio.h>

int count_bit_1(unsigned n){
    unsigned int count = 0;
    while (n > 0){
        if (n & 1){
            count++;
        }
        n >>= 1;
    }
    return count;
}
int main(){
    unsigned int n;
    printf("Input value n: \n");
    scanf("%d",&n);

    printf("Bit 1: %d\n",count_bit_1(n));
    return 0;
}