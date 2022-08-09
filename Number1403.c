#include <stdio.h>
int main(void)
{
    int i, j, n;
    scanf("%d", &n);
    int data[n];
    for(i=0; i<n; i++)
        scanf("%d", &data[i]);
    for(i=0; i<2; i++)
    {
        for(j=0; j<n; j++)
            printf("%d\n", data[j]);
    }
    return 0;
}