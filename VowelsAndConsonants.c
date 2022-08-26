#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];
    printf("Enter String: \n");
    char *p = string;
    fgets(p, 100, stdin);
    int vowels = 0, consonants = 0;
    int *a = &vowels;
    int *b = &consonants;
    for (int i = 0; *(p + i); i++)
    {
        if (*(p + i) == 'a' || *(p + i) == 'e' || *(p + i) == 'i' || *(p + i) == 'o' || *(p + i) == 'u')
        {
            (*a)++;
        }
        else
        {
            if (*(p + i) > 96 && *(p + 1) < 123)
                (*b)++;
        }
    }
    printf("Total Vowels In String: %d\nTotal Consonants In String: %d", *a, *b);

    return 0;
}