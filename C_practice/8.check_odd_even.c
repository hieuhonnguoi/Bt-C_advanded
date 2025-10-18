#include <stdio.h>
#include <stdbool.h>

bool check_odd_even(unsigned n){
    return (n & 1);
}

int main(){
    unsigned int n;
    printf("Input value n: \n");
    scanf("%d",&n);

    if (check_odd_even(n)){
        printf("Odd number\n");
    } else {
        printf("Even number\n");
    }
    return 0;
}