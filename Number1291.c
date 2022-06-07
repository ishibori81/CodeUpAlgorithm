#include <stdio.h>

//My answer
// int main()
// {
//     int a, b, c, n, i, sum=1;
//     scanf("%d %d %d", &a, &b, &c);
//     n = a;
//     for (i=2; i<=n; i++)
//     {
//         if (a%i == 0 && b%i == 0 && c%i == 0)
//         {
//             a /= i;
//             b /= i;
//             c /= i;
//             sum *= i;
//             i = 1;
//         }
//     }
//     printf("%d", sum);
//     return 0;
// }

//Site answer
int main()
{
    int a, b, c, i;
    scanf("%d %d %d", &a, &b, &c);
    for (i=a; i>=1; i--)
    {
        if (a%i == 0 && b%i == 0 &&c%i == 0)
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}