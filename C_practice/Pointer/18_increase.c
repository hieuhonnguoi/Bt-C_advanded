#include <stdio.h>

int increase(int *x){
    (*x)++;
}

int main(){
    int x = 10;
    increase(&x);
    printf("Giá trị sau tăng là: %d\n",x);
    return 0;
}