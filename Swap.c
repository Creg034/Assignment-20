// Swap values with pointer
#include <stdio.h>
int swap(int *, int *);
#include <string.h>
int main()
{
    int a = 3, b = 4;
    printf("Before: a: %d, b: %d\n", a, b);
    swap(&a, &b);
    printf("After: a: %d, b: %d\n", a, b);
    return 0;
}
int swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}