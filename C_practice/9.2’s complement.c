#include <stdio.h>

int complement(int n){
    return(~n + 1); 
}

int main(){
    unsigned int n;
    printf("Input value n: \n");
    scanf("%d",&n);

    printf("2's complement of %d: %d\n",n,complement(n));
    return 0;
}