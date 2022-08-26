#include <stdio.h>
#include <string.h>
int swapThroughAddress(int *, int *); // here are many possiblities
int swapThroughRefrence(int, int);    // Max to Max we can return only one value
int main()
{
    int num1 = 34;
    int num2 = 43;
    int *a = &num1;
    int *b = &num2;
    printf("Actual Value: \na: %d\nb: %d", *a, *b);
    swapThroughRefrence(*a, *b); // Values/Refrences
    printf("\n\n");
    printf("swap through refrence: \na: %d\nb: %d", *a, *b);
    swapThroughAddress(a, b); // Address
    printf("\n\n");
    printf("swap through address: \na: %d\nb: %d", *a, *b);
    return 0;
}
int swapThroughRefrence(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
int swapThroughAddress(int *a, int *b)
{

    int temp = *a;
    *a = *b;
    *b = temp;
}
