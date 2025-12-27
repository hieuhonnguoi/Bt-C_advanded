#include <stdio.h>
#include <string.h>

int main(){
    int a[100];
    int max = -100000000;
    int count = 0;
    int x,n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    printf("Input x: ");
    scanf("%d", &x);

    printf("Input value: ");
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
  
    for (int i = 0; i < n; i++){
        if (a[i] == x) count++;
    }
    if (count == 1) printf("Valid\n");
    else printf("Unvalid\n");
    return 0;
}