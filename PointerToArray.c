#include <stdio.h>
#include <string.h>
int main()
{
    int(*p)[4]; // Means Its a 2d Array
    int a[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
    };
    p = a;
    printf("%d\n", p);                  //  >>---> &a[0]
    printf("%d\n", *((*p + 1)+1)+1); //  >>---> &a[0]
    printf("%d", *(*p));                //  >>---> a[0]
    printf("%d", (*(p + 2))[3]);        //  >>---> a[3][2]
    return 0;
}