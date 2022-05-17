#include <stdio.h>

int main()
{
    char n, a = 'a';
    scanf("%c", &n);
    do 
    {
        printf("%c ", a);
        a++;
    }
    while(a <= n);
    return 0;
}