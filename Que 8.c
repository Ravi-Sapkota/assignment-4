/*
Create a structure named coin with members head and tail. Write a C program that will toss coin 1000 times.
Each time coin is tossed, either head or tail will appear up. Finally count the number of head and tail occurred.
*/
#include <stdio.h>
#include <time.h>
struct coin
{
    int head;
    int tail;
} ch;
int main()
{
    ch.head = 0;
    ch.tail = 0;
    int i;
    srand(time(0));
    for (i = 0; i < 1000; i++)
        (rand() % 2) ? ch.head++ : ch.tail++;
    printf("Head=%d and Tail=%d", ch.head, ch.tail);
    return 0;
}