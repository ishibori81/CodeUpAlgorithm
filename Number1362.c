#include <stdio.h>
//MyCode
// int main()
// {
//     int i, j, k, n, x, y;
//     scanf("%d", &n);
//     if (n == 1) 
//         x = n;
//     else if (n%2 != 0)
//         x = (n/2+1)*n;
//     else 
//     {
//         y = n-1;
//         x = n + (y/2+1)*y;
//     }
//     for(i=1; i<=n; i++)
//     {
//         for (j=i; j>0; j--)
//         {
//             printf("%d ", x);
//             x--;
//         }
//         printf("\n");
//     }
//     return 0;
//}

//Site Code
int main()
{
    int n, i, j, v;
    scanf("%d", &n);
    v = n*(n+1)/2;
    for(i=1; i <=n; i++)
    {
        for(j=1; j<=i; j++)
            printf("%d ", v--);
        printf("\n");
    }
    return 0;
}