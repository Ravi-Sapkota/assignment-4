/*
What is dynamic memory allocation?
Write a C program that reads ‘n’ numbers and sort them in ascending order using dynamic memory allocation.
Use malloc function
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j;
    printf("How many numbers do you want to sort?\n");
    scanf("%d", &n);
    int *p = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", (p + i));
    }
    int temp;
    for (j = 0; j < n - 1; j++)
        for (i = 0; i < n - 1; i++)
            if (*(p + i) > *(p + i + 1))
            {
                temp = *(p + i);
                *(p + i) = *(p + i + 1);
                *(p + i + 1) = temp;
            }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(p + i));
    }
    return 0;
}
