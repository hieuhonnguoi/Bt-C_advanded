#include <stdio.h>
#include <string.h>

int main(){
    int a[100];
    int max = -100000000;
    printf("Input value: ");
    for (int i = 0; i < 5; i++){
        scanf("%d",&a[i]);
    }
  
    for (int i = 0; i < 5; i++){
        if (a[i] >= max) max = a[i];
    }
      printf("\nMax: %d\n",max);
    return 0;
}