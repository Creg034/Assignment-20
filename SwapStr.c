#include <stdio.h>
#include <string.h>
void swap(char *a, char *b);
int main()
{
    char string1[34] = "Gaurav is my name";
    char string2[34] = "Name of my firend is rucha";
    char *p = &string1[0];
    char *q = &string2[0];
    printf("\n\n****Before****\n\n");
    for (int i = 0; *(p + i); i++)
    {
        printf("%c", *(p + i));
    }
    printf("\n");
    for (int i = 0; *(q + i); i++)
        printf("%c", *(q + i));
    printf("\n\n****After****\n\n");
    swap(string1, string2);
    for (int i = 0; *(p + i); i++)
    {
        printf("%c", *(p + i));
    }
    printf("\n");
    for (int i = 0; *(q + i); i++)
        printf("%c", *(q + i));
    printf("\n\n");
    return 0;
}
void swap(char *a, char *b)
{
    {
        char temp[34];
        for (int j = 0; j < 34; j++)
        {
            *(temp + j) = 0;
        }
        for (int i = 0; *(a + i); i++)
        {
            *(temp + i) = *(a + i);
        }
        for (int j = 0; j < 34; j++)
        {
            *(a + j) = 0;
        }
        for (int k = 0; *(b + k); k++)
        {
            *(a + k) = *(b + k);
        }
        for (int l = 0; l < 34; l++)
        {
            *(b + l) = 0;
        }
        for (int q = 0; *(temp + q); q++)
        {
            *(b + q) = *(temp + q);
        }
    }
}
// Bohot bada swap ban gaya hena
// 1. store clean 0's in before other string element
// then swap with the help of pointers