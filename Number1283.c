#include <stdio.h>

int main()
{
    float a, c, sum=0;
    int b, i;
    scanf("%f", &a);
    sum = a;
    scanf("%d", &b);
    for (i = 1; i <= b; i++)
    {
        scanf("%f", &c);
        //sum = sum+(sum*(c/100));
        sum *= (100+c)/100;
    }
    printf("%0.f\n", sum - a);
    if(sum < a) printf("bad");
    else if (sum > a) printf("good");
    else printf("same");
    return 0;
}