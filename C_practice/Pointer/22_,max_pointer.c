#include <stdio.h>

int* maxPtr(int *a, int n){
    int *max = a;
    for (int i = 0; i < n; i++){
        if (*(a+i) > *max){
            max = a+i;
        }
    }
    return max;
}

int main(){
    int a[] = {4,10,3,5};
    printf("Max value: %d\n",*maxPtr(a,4));
    return 0;
}