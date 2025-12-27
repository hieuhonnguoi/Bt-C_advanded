#include <stdio.h>
#include <string.h>

int main(){
    int a[100];
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    printf("Input value: ");
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                for (int k = j; k < n - 1; k++) {
                    a[k] = a[k + 1];
                }
                n--;     
                j--;     
            }
        }
    }

    printf("Mang sau khi loai bo trung lap: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

   
    return 0;
}