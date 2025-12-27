#include <stdio.h>
#include <string.h>

int main(){
    int a[100];
    int sum = 0;
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    printf("Input value: ");
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
  
    for (int i = 0; i < n; i++){
        sum += a[i];
    }
      printf("\nAverage: %d\n",sum/n);
    return 0;
}