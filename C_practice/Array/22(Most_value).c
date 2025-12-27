#include <stdio.h>
#include <string.h>

int main(){
    int a[100];
    int k,x,n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    int max_count = 0;
    int value = a[0];

    printf("Input value: ");
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == a[i])
                count++;
        }
        if (count > max_count) {
            max_count = count;
            value = a[i];
        }
    }

    printf("Phan tu xuat hien nhieu nhat la: %d (xuat hien %d lan)\n", value, max_count);
    return 0;
}