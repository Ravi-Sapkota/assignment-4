/*
Create structure named ‘student’ with member ‘rollno’, ‘name’ and ‘marks’.
Allocate memory for storing records of 10 students.
Write a complete C program that can store record of these 10 students, can delete some records and print them.
Use dynamic memory allocation
*/
#include <stdio.h>
#include <stdlib.h>
#define N 10
struct student
{
    int rollno;
    char name[20];
    int marks;
};
int main()
{
    struct student s[N];
    struct student *p;
    p = s;
    int i, x;
    p = (int *)malloc(N * sizeof(s));
    if (p != NULL)
    {
        printf("%u\n", p);
        printf("Memory allocated successfully:\n");
        printf("Enter the rollno, name and marks of %d students\n", N);
        for (i = 0; i < N; i++)
        {
            scanf("%d%s%d", &(p + i)->rollno, (p + i)->name, &(p + i)->marks);
        }
        printf("How many data do you want to delete?\n");
        scanf("%d", &x);
        p = realloc(p, (N - x) * sizeof(s));
        if (p != NULL)
        {
            printf("%u\n", p);
            printf("%d deleted elements successfully\n", x);
            printf("Rollno\tName\tMarks\n");
            for (i = 0; i < (N - x); i++)
            {
                printf("%d\t%s\t%d\n", (p + i)->rollno, (p + i)->name, (p + i)->marks);
            }
        }
    }
    return 0;
}
