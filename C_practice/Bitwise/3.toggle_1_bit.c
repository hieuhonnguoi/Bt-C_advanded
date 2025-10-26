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

    x ^= (1 << n);

    printBinary(x);
    return 0;
}