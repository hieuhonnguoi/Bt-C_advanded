#include <stdio.h>

int find_MSB(unsigned int n){
    if (n == 0) return -1;
    int pos = 0;
    while(n >>= 1){
        pos++;
    }
    return pos;
}

int main(){
    unsigned int n;
    printf("Input value n: \n");
    scanf("%d",&n);

    if (find_MSB(n) >= 0){
        printf("MSB of %d: %d\n",n,find_MSB(n));
    } else {
        printf("No bit set\n");
    }
    
    return 0;
}