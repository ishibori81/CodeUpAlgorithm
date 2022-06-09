#include <stdio.h>

//My code
// int main()
// {
//     int i, n, x, sum=0;
//     scanf("%d", &n);
//     for (i=1; i<=10; i++)
//     {
//         x = n%10;
//         sum += x;
//         n /= 10;
//     }
//     if (sum%7 == 4)
//         printf("suspect");
//     else
//         printf("citizen");
//     return 0;
// }

//Site Code
int main()
{
    int i, n, sum=0;
    for (i=1; i <=10; i++)
    {
        scanf("%1d", &n);
        sum += n;
    }
    if (sum%7 == 4)
        printf("suspect");
    else
        printf("citizen");
    return 0;
}