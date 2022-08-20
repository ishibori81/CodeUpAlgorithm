#include <stdio.h>
int main(void)
{
    char chr[101];
    int i, count1=0, count2=0;
    fgets(chr, 101, stdin);
    for(i=0; chr[i] != '\0'; i++)
    {
        if(chr[i] == 'c'|| chr[i] == 'C')
            count1++;
            if(chr[i+1] == 'c' || chr[i+1] == 'C')
                count2++;
    }
    printf("%d\n%d", count1, count2);
    return 0;
}