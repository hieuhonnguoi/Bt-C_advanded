#include <stdio.h>
#include <string.h>

int main(){
    int a[5];
    int sum = 0;
    printf("Input value: ");
    for (int i = 0; i < 5; i++){
        scanf("%d",&a[i]);
    }
  
    for (int i = 0; i < 5; i++){
        sum += a[i];
    }
      printf("\nSum: %d\n",sum);
    return 0;
}