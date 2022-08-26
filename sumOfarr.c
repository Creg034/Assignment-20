#include <stdio.h>
#include <string.h>
int main()
{
    int sum = 0;
    int arr[10];
    // int *a = &arr[0];
    int *a = &arr[0];
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    printf("Enter Array Below: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Arr[%d]: ", i);
        scanf("%d", a + i);
        sum += *(a + i);
    }
        printf("%d", sum);
    return 0;
}