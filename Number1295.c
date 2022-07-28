#include <stdio.h>

int main()
{
    char chr;
    while(scanf("%c", &chr) != EOF)//CodeUpはEOF使用
    {
        if (chr >= 65 && chr <= 90)
            printf("%c", chr+32);
        else if (chr >= 97 && chr <= 122)
            printf("%c", chr-32);
        else
            printf("%c", chr);
    }
    return 0;
}