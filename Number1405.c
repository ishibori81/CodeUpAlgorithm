#include <stdio.h>
int main(void)
{
    int i, j, n, num;
    scanf("%d", &n);
    int data[n];
    for(i=0; i<n; i++)
        scanf("%d", &data[i]);
    for(i=0; i<n; i++)
    {
        num = i;
        for(j=0; j<n; j++)
        {
            if(num>=n) num = 0;
            printf("%d ", data[num]);
            num++;
        }
        printf("\n");
    }
    return 0;
}