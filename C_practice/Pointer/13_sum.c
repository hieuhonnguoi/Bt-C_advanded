#include <stdio.h>

int main(){
    int a[] = {1,2,3,4,5};
    int *p = a; 
    int sum = 0;

    for (int i = 0; i < 5; i++){
        sum += *(p + i);
    }

    printf("Tổng là: %d\n",sum);

    return 0;
}