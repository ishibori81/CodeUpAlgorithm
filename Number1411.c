#include <stdio.h>
int main(void)
{
    int i, n, sum=0;
    scanf("%d", &n);
    int arr[51]={0};
    for(i=1; i<n; i++)
    {        
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%d", (n*(n+1)/2)-sum);
    return 0;
}