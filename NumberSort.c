#include <stdio.h>
int sortArr(int *, int);
int swap(int *, int *);
int main()
{
    int n = 5;
    int arr[34];
    int *p = &arr[0];
    printf("Enter Array Below: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Numer[%d]: ", i);
        scanf("%d", p + i);
    }
    sortArr(p, n);
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", *(p + i));
    }

    return 0;
}
int sortArr(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(p + i) > *(p + j))
                swap(p + i, p + j);
        }
    }
}
int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// 3-4 min Easy Cheesy