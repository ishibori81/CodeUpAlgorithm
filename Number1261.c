#include <stdio.h>

int main()
{
    //my code
    // int i, c=0;
    // int a[10] = {};
    // for (i = 0; i < 10; i++)
    //     scanf("%d", &a[i]);
    // for (i = 0; i < 10; i++)
    // {
    //     if(a[i]%5 == 0)
    //     {
    //         printf("%d", a[i]);
    //         break;
    //     }
    //     else
    //     {
    //         c++;
    //         if(c == 10)
    //             printf("0");
    //     }
    // }
    // return 0;

    //recommendation code
    int i, n;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        if (n%5 == 0)
        {
            printf("%d", n);
            return 0;
        }
    }
    printf("0");
    return 0;
}