#include <stdio.h>

int main()
{
    int sum = 0;
    int i, n;
    scanf("%d", &n);
    for (i = 0; sum < n; i++)
    {
        sum += i;
    }
    printf("%d", i - 1);
    return 0;
}