#include <stdio.h>

int equal_or_not(int a,int b){
    return(a ^ b); 
}

int main(){
    unsigned int a;
    printf("Input value a: ");
    scanf("%d",&a);

    unsigned int b;
    printf("Input value b: ");
    scanf("%d",&b);


    if (equal_or_not(a,b)){
        printf("Not equal\n");
    } else {
        printf("Equal\n");
    }

    return 0;
}