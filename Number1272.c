#include <stdio.h>

int main()
{
    int k, h;
    scanf("%d %d", &k, &h);
    if (k%2 == 0) k = k/2*10;
    else k = k/2+1;
    if (h%2 == 0) h = h/2*10;
    else h = h/2+1;
    printf("%d", k + h);
    return 0;
}