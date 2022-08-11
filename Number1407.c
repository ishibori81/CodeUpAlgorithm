#include <stdio.h>
#include <string.h>

int main(void)
{
    char chr[100];
    fgets(chr, 10, stdin);
    for(int i=0; i<strlen(chr); i++)
    {
        if(chr[i] != ' ')  printf("%c", chr[i]);
    }
    return 0;
}