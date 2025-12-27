#include <stdio.h>
#include <stdlib.h>

int main() {
    int N = 2, M = 3;

    int **a = (int**)malloc(N * sizeof(int*));

    for(int i = 0; i < N; i++)
        a[i] = (int*)malloc(M * sizeof(int));

    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
            a[i][j] = i + j;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    for(int i = 0; i < N; i++)
        free(a[i]);
    free(a);

    return 0;
}
