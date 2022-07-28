#include <stdio.h>
int main()
{
    char chr;
    while(scanf("%c", &chr) != EOF)
    {
        if (chr == ' ')
            printf("%c", chr);
        else if (chr == 'x')
            printf("%c",'a');
        else if (chr == 'y')
            printf("%c",'b');
        else if (chr == 'z')
            printf("%c",'c');
        else printf("%c", chr+3);
    }
    return 0;
}