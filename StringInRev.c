#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];
    printf("Enter String Below: \n");
    char *p = &string[0];
    fgets(p, 100, stdin);
    int count = 0;
    for (int i = 0; *(p + i); i++)
    {
        count++;
    }
    for (int i = count - 1; i >= 0; i--)
    {
        printf("%c", *(p + i));
    }
    return 0;
}