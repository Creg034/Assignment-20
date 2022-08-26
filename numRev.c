#include <stdio.h>
#include <string.h>
int main()
{
    int arr[10];
    int *p = arr;
    int n = 10;
    printf("Enter Numbers Array Below: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Arr[%d]: ", i);
        scanf("%d", p + i);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d\t", *(p + i));
    }
    return 0;
}