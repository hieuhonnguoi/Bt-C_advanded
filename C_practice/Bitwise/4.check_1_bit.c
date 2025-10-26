#include <stdio.h>

void printBinary(unsigned int x){
    for(int i = 7;i >= 0; i--){
        printf("%d",(x>>i) & 1);
    }
    printf("\n");
}
int main(){
    unsigned int x;
    int n;
    printf("Input value: \n");
    scanf("%d",&x);
    printBinary(x);
    printf("set n bit: \n");
    scanf("%d",&n);

    if (x & (1 << n)){
        printf("Bit %d is set\n",n);
    } else {
        printf("Bit %d is not set\n",n);
    }
    return 0;
}