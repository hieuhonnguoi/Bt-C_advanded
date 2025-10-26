#include <stdio.h>

void printBinary(unsigned int x){
    for(int i = 7;i >= 0; i--){
        printf("%d",(x>>i) & 1);
    }
    printf("\n");
}
int main(){
    unsigned int n;
    printf("Input value: \n");
    scanf("%d",&n);
    printBinary(n);

    int x = n & (-n);
    printf("Isolate rightmost set bit: ");
    printBinary(x);
    return 0;
}