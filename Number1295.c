#include <stdio.h>

int main()
{
    char a = '\0';
    while(1)//CodeUpはEOF使用
    {
        if (a ==  '\n')
            break;
        a = getchar();
        if (a >= 65 && a <= 90)
            printf("%c", a+32);
        else if (a >= 97 && a <= 122)
            printf("%c", a-32);
        else
            printf("%c", a);
    }
    return 0;
}