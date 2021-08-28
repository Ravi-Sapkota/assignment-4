/*
Write a function named count Representations that returns the number of ways that an amount of money in rupees can be represented as rupee notes.
For this problem we only use  rupee notes in denominations of 1, 2, 5, 10 and 20 rupee notes.
*/
#include <stdio.h>
#define add(r20, r10, r5, r2, r1) (r20 * 20 + r10 * 10 + r5 * 5 + r2 * 2 + r1 * 1)
int countRepresentations(int);
int main(int argc, char *argv[])
{
    printf("%d", countRepresentations(12));
    return 0;
}
int countRepresentations(int numRupees)
{
    int count = 0;
    for (int d20 = 0; d20 <= numRupees / 20; d20++)
        for (int d10 = 0; d10 <= numRupees / 10; d10++)
            for (int d5 = 0; d5 <= numRupees / 5; d5++)
                for (int d2 = 0; d2 <= numRupees / 2; d2++)
                    for (int d1 = 0; d1 <= numRupees / 1; d1++)
                        if (add(d20, d10, d5, d2, d1) == numRupees)
                            count++;
    return count;
}