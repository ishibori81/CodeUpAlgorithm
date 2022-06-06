#include <stdio.h>

// my answer
// int main()
// {
//     int n, i, r, nSum=1, rSum=1, NR=1;
//     scanf("%d %d", &n, &r);
//     for (i=1; i <= n; i++)
//         nSum *= i;
//     for (i=1; i <= r; i++)
//         rSum *= i;
//     for (i=1; i <= n-r; i++)
//         NR *= i;
//     printf("%d", nSum/(NR*rSum));
//     return 0;
// }

//Site answer
int f(int k)
{
    if (k <= 1) return 1;
    else return k*f(k-1);
}

int main()
{
    int n, r;
    scanf("%d %d", &n, &r);
    printf("%d", f(n)/f(r)/f(n-r));
    return 0;
}