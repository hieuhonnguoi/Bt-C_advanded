#include <stdio.h>

void swap (int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 5, y = 7;
    swap(&x, &y);
    printf("Swap value: x = %d, y = %d\n",x,y);
    return 0;
}