#include <stdio.h>
int main(void)
{
    char chr[90]={0};
    int arr[172]={0};
    int i, num;
    fgets(chr, 90, stdin);
    for(i=0; chr[i] != '\0'; i++)
    {
        num = chr[i];
        arr[num]++;
    }
    for(i=97; i<=122; i++)
    {
        printf("%c:%d\n", i, arr[i]);
    }
    return 0;
}