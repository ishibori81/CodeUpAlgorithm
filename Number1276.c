#include <stdio.h>
int main()
{
    int i, n, sum=1;
    scanf("%d", &n);
    for(i=n; i>0; i--)
        sum *= i;
    printf("%d", sum);
    return 0;
}