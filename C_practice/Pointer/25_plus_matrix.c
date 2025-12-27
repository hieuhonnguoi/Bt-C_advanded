#include <stdio.h>

int main() {
    int A[2][2]={{1,2},{3,4}};
    int B[2][2]={{5,6},{7,8}};
    int C[2][2];

    int *pA = &A[0][0];
    int *pB = &B[0][0];
    int *pC = &C[0][0];

    for(int i=0;i<4;i++)
        *(pC+i) = *(pA+i) + *(pB+i);

    return 0;
}
