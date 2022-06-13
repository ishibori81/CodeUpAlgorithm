#include <stdio.h>

int main()
{
    int i, n, k, s=0, max=0;
    scanf("%d", &n);
    for(i=1; i < n/2; i++)
    {
        s = i * (n-i*2);
        if(max < s)
        {
            k = i;
            max = s;
        }
    }
    printf("%d", k);
    return 0;
}