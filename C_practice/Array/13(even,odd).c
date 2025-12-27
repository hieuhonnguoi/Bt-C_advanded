#include <stdio.h>
#include <string.h>

int main(){
    int a[100];
    int count_even = 0;
    int count_odd = 0;
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    printf("Input value: ");
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
  
    for (int i = 0; i < n; i++){
        if (a[i] % 2 == 0) count_even++;
        else count_odd++;
    }
    printf("\nEven: %d\n",count_even);
    printf("\nOdd: %d\n",count_odd);
    return 0;
}