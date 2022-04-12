#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a >= 90) printf("%c", 'A');
    else if (a >= 70) printf("%c", 'B');
    else if (a >= 40) printf("%c", 'C');
    else printf("%c", 'D');
    return 0;
}