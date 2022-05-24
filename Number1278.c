#include <stdio.h>

int main()
{
    int a, cont = 0;
    scanf("%d", &a);
    while (a > 0)
    {
        cont++;
        a /= 10;
    }
    printf("%d", cont);
    return 0;
}