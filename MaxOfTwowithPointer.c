#include <stdio.h>
#include <string.h>
int maxFinder(int *, int *);
int main()
{
    int a;
    int b;
    int *p = &a;
    int *q = &b;
    printf("Enter Num1: ");
    scanf("%d", p);
    printf("Enter Num2: ");
    scanf("%d", q);
    int ans = maxFinder(p, q);
    printf("Answer: %d", ans);
    return 0;
}
int maxFinder(int *p, int *q)
{
    if (*p > *q)
    {
        return *p;
    }
    else
        return *q;
}