#include <stdio.h>

int main()
{
    /*
    //自分回答
    int i, n, t;
    int a[10000] = {};
    scanf("%d", &n);
    for (i=1; i <=n; i++)
    {
        scanf("%d", &t);
        a[t] += 1; 
    }
    for (i=1; i <= 10000; i++)
    {
        if(a[i] > 0)
        {
            printf("%d", i);
            break;
        }
    }*/

    //codeUP正解
    int i, k;
    int a[10000] = {0};
    int min = 24;
    scanf("%d", &k);
    for(i=1; i<=k; i++)
    {
        scanf("%d", &a[i]);
        if(min > a[i])
            min = a[i];
    }
    printf("%d", min);

    return 0;
}