#include <stdio.h>
#include <stdbool.h>

bool multiple_of_8(int n){
    return (n % 8 == 0);
}
int main(){
    unsigned int n;
    printf("Input value: \n");
    scanf("%d",&n);

    if (multiple_of_8(n)){
        printf("%d is multiple of 8\n",n);
    } else {
        printf("%d is not multiple of 8\n",n);
    }
    return 0;
}