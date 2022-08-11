#include <stdio.h>
#include <string.h>
int main(void)
{
    char buffer[100001]={'0'};
    int open=0, close=0;
    fgets(buffer, 100001, stdin);
    for(int i=0; i <strlen(buffer); i++)
    {
        if(buffer[i] == '(')
            open++;
        else if(buffer[i] == ')')
            close++;
    }
    printf("%d %d", open, close);
    return 0;
}