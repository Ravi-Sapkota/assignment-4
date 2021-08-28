/*
Define a square pair to be the tuple <x, y> where x and y are positive, non-zero integers, x<y and x + y is a perfect square.
A perfect square is an integer whose square root is also an integer, e.g. 4, 9, 16 are perfect squares but 3, 10 and 17 are not.
Write a function named countSquarePairs that takes an array and returns the number of square pairs that can be constructed from the elements in the array.
For example, if the array is {11, 5, 4, 20} the function would return 3 because the only square pairs that can be constructed from those numbers are <5, 11>, <5, 20> and <4, 5>. 
You may assume that there exists a function named isPerfectSquare that returns 1 if its argument is a perfect square and 0 otherwise. E.G., isPerfectSquare (4) returns 1 and isPerfectSquare (8) returns 0.
*/
#include <stdio.h>
#include <math.h>
#define size(x) (sizeof(x) / sizeof(x[0]))
struct tuple
{
    int x;
    int y;
} t;
int isPerfectSquare(struct tuple);
int countSquarePairs(int[], int);
int main()
{
    int array[] = {11, 5, 4, 20};
    printf("The given array has %d square pairs.\n", countSquarePairs(array, size(array)));
    return 0;
}
int countSquarePairs(int array[], int len)
{
    int i, j;
    int count = 0;
    for (i = 0; i < len; i++)
        for (j = 0; j < len; j++)
            if (array[i] < array[j])
            {
                t.x = array[i];
                t.y = array[j];
                if (isPerfectSquare(t))
                {
                    count++;
                    printf("<%d, %d>\n", t.x, t.y);
                }
            }
    return count;
}
int isPerfectSquare(struct tuple t)
{
    int r1 = sqrt(t.x + t.y);
    return (r1 * r1 == t.x + t.y);
}
