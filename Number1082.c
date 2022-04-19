#include <stdio.h>

int main()
{

    int hxe, i;
    scanf("%X", &hxe);
    for (i = 1; i < 16; i++)
    {
        printf("%X*%X=%X\n", hxe, i, hxe*i);
    }
    return 0;
}