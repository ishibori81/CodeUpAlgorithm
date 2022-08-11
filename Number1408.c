#include <stdio.h>
#include <string.h>
int main(void)
{
    char pass[21];
    scanf("%s", pass);
    for(int i=0; i<strlen(pass); i++)
        printf("%c",pass[i]+2);
    printf("\n");
    for(int i=0; i<strlen(pass); i++)
        printf("%c",(pass[i]*7)%80+48);
    return 0;
}