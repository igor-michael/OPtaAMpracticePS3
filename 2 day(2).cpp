#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <memory.h>
 
const int n = 20;
const int m = 10;
 
int main(int argc, char* argv[])
{
    int** A = new int*[n];
    memset((void*)A, 0x00, 4 * n);
 
    int* B = new int[n];
    memset((void*)B, 0x00, n * sizeof(int));
 
    for (int t1 = 0; t1 < n; t1++)
    {
        A[t1] = new int[m];
        memset((void*)A[t1], 0x00, sizeof(int) * m);
        
        B[t1] = rand() % (m-1) + 1;
        for (int t2 = 0; t2 < B[t1]; t2++)
            A[t1][t2] = rand() % m + 1;
    }
 
    for (int z1 = 0; z1 < n; z1++)
    {
        for (int z2 = 0; z2 < m; z2++)
            printf("%d ",A[z1][z2]);
 
        printf("\n");
    }
 
    printf("\n");
 
    int* T = new int[n*m];
    memset((void*)T, 0x00, sizeof(int)*n*m);
 
    int x = 0;
    for (int i = 0; i < n; i++)
        for (int k = 0; k < B[i]; k++)
            T[x++] = A[i][k];
 
    for (int r = 0; r < x; r++)
        printf("%d ",T[r]);
 
    printf("\n");
 
    _getch();
 
    return 0;
}
