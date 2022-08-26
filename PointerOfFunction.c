#include <stdio.h>
#include <string.h>
int printArr(int **);
int main()
{
    int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int cars[5] = {12, 14, 15, 17, 18};
    int buckets[15] = {23, 25, 27, 29, 29, 34, 36, 38, 95, 36, 56, 45, 34, 65, 34};
    int *p[3];
    p[0] = num;
    p[1] = cars;
    p[2] = buckets;
    printArr(p);
    return 0;
}
int printArr(int **p)
{
    printf("%d\n", p);               // Address of &p[0]
    printf("%d\n", *(p));            // Value of p[0] = address of &num[0]
    printf("%d\n", **(p));           // Value of p[0] = value of num[0] = 1
    printf("%d\n", **(p + 1));       // Value of p[0+1] = value of cars[0] = 12
    printf("%d\n", *(*(p + 2) + 3)); // Value of p[0+2] = value of cars[0+3] = 29
}