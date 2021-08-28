/*
Write a C program that reads name, phone, email and mailing address of 20 persons and rearrange the names into alphabetical order and then display all information in the alphabetical order.
*/
#include <stdio.h>
#include <string.h>
#define N 20
struct person
{
    char Name[20];
    unsigned long long Phone;
    char Email[50];
    char MailingAddress[50];
};
int main()
{
    struct person s[N];
    struct person temp;
    int i, j;
    for (i = 0; i < N; i++)
    {
        printf("Enter the name, phone, email and mailing address of person %d here:\n\n", i + 1);
        scanf("%s%llu%s%s", s[i].Name, &s[i].Phone, s[i].Email, s[i].MailingAddress);
    }
    printf("\n\n\n*******************************************\n");
    printf("Before sorting (Your input):\n");
    printf("Name\t\tPhone\t\t\tE-mail\t\tMailing address\n\n");
    for (i = 0; i < N; i++)
        printf("%s\t\t%llu\t\t%s\t\t%s\n", s[i].Name, s[i].Phone, s[i].Email, s[i].MailingAddress);
    for (i = 0; i < N; i++)
        for (j = 0; j < N - 1; j++)
            if (strcmp(s[j].Name, s[j + 1].Name) > 0)
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
    printf("\nThe record after sorting is\n");
    printf("Name\t\tPhone\t\t\tE-mail\t\tMailing address\n\n");
    for (i = 0; i < N; i++)
        printf("%s\t\t%llu\t\t%s\t\t%s\n", s[i].Name, s[i].Phone, s[i].Email, s[i].MailingAddress);
    return 0;
}