/*
Write a C program to read a matrix of size m*n entered by the user, and display the transpose matrix.
Use dynamic memory allocation.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, n, i, j, **s;
    printf("No. of rows = ");
    scanf("%d", &m);
    s = (int **)malloc(m * sizeof(int *));
    printf("Number of columns = ");
    scanf("%d", &n);
    for (i = 0; i < m; i++)
        s[i] = (int *)malloc(n * sizeof(int));
    printf("\nEnter %dx%d matrix here:\n", m, n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &s[i][j]);
    printf("\nThe transpose matrix of given matrix is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            printf("%d  ", s[j][i]);
        printf("\n");
    }
    return 0;
}
