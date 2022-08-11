#include <stdio.h>
#include <string.h>

int main(void)
{
    char chr[20];
    scanf("%s", chr);
    if(strcmp("love", chr) == 0) printf("I love you.");
    return 0;
}