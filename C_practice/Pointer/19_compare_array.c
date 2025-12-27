#include <stdio.h>

int main(){
    int a[5];
    int *p1 = &a[1];
    int *p2 = &a[2];
    if (p1 < p2){
        printf("p1 < p2 \n");
    }
}