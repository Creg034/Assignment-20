#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];
    char *p = &string[0];
    printf("Enter String Below: \n");
    fgets(p, 100, stdin);
    int count = 0;
    for (int i = 0; *(p + i); i++)
    {
        count++;
    }
    printf("%d", count - 1);
    return 0;
}