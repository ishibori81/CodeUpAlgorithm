#include <stdio.h>
#include <string.h>
int main(void)
{
    char chr[101];
    fgets(chr, 101, stdin);
    for(int i=strlen(chr)-1; i>=0; i--)
        printf("%c", chr[i]);
    return 0;
}