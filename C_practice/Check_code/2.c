#include <stdio.h>
#include <string.h>

void my_strcpy(char *des, const char *str){
    while (*str){
        *des++ = *str++;
    }
    des = '\0';
}

int main(){
    char str[] = "Hello world";
    char des[50];

    my_strcpy(des, str);

    printf("Chuỗi gốc: %s\n", str);
    printf("Chuỗi sao chép: %s\n", des);

    return 0;
}