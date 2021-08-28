/*
Write a function that receives a string and a character as arguments and deletes all occurrences of this characters in the string.
The function must return the corrected string without holes.
*/
#include <stdio.h>
#define SIZE(x) sizeof(x) / sizeof(x[0])
char *wordRep(char[], char, int);
int main()
{
    char word[20];
    puts("Enter the string here: ");
    gets(word);
    char str;
    puts("Enter the character you want to remove here: ");
    scanf("%c", &str);
    puts(wordRep(word, str, SIZE(word)));
    return 0;
}
char *wordRep(char word[], char str, int len)
{
    char *string = word;
    int i, j = 0;
    for (i = 0; i < len; i++)
    {
        if (word[i] != str)
        {
            string[j] = word[i];
            j++;
        }
    }
    return string;
}
