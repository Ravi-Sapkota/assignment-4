/*
Create a structure called Currency which has rupees and paisa as members.
Write a program to read two currencies from the user and add them.
*/
#include <stdio.h>
struct Currency
{
    int rupees;
    int paisa;
};
int main(void)
{
    struct Currency c1, c2, sum;
	scan:
    printf("Enter the first currency in terms of rupees and paisa.\n");
    scanf("%d%d", &c1.rupees, &c1.paisa);
    printf("Enter the second currency in terms of rupees and paisa.\n");
    scanf("%d%d", &c2.rupees, &c2.paisa);
    if (c2.paisa >= 100 || c1.paisa >= 100)
    {
        printf("Paisa must be between 0 and 99.\n");
        goto scan;
    }
    sum.paisa = c1.paisa + c2.paisa;
    sum.rupees = c1.rupees + c2.rupees;
    if (sum.paisa > 99)
    {
        sum.rupees += sum.paisa / 100;
        sum.paisa %= 100;
    }
    printf("The sum of given two currencies is %d.%d\n", sum.rupees, sum.paisa);
}
