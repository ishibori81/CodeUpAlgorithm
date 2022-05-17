#include <stdio.h>

int main()
{
    int i, n, t;
    int a[24] = {};
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &t);//複数の入力を一つずつ配列番地代入する
        a[t] += 1;//配列番地の代入回数 
    }
    for (i=1; i<=23; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}