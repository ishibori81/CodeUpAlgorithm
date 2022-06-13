#include <stdio.h>

int main()
{
    float n;
    scanf("%f", &n);
    n /= 4;
    n *= n;
    printf("%d", (int)n);
    return 0;
}