#include <stdio.h>
//My code
// int main(void)
// {
//     int i, j, n;
//     scanf("%d", &n);
//     for(i=1; i<=n; i++)
//     {
//         if(i==1 || i == n)
//         {
//             for(j=1; j<=n; j++)
//                 printf("*");
//             printf("\n");
//         }
//         else
//         {
//             printf("*");
//             for(j=n-2; j>0; j--)
//                 printf(" ");
//             printf("*\n");
//         }
//     }
//     return 0;
// }

//Site Code
int main(void)
{
    int i, j, n;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if (i==0||i==n-1||j==0||j==n-1)
                printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}