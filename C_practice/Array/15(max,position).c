#include <stdio.h>
#include <string.h>

int main(){
    int a[100];
    int max = -100000000;
    int pos;
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    printf("Input value: ");
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
  
    for (int i = 0; i < n; i++){
        if (a[i] >= max) {
            max = a[i];
            pos = i;
        }
    }
      printf("\nMax: %d\n",max);
      printf("Position: %d\n",pos+1);
    return 0;
}