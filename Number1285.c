#include <stdio.h>

//自分の答え
/*
int main()
{
    int n, sum=0;
    char a, b = '+';
    while(1)
    {
        scanf("%d", &n);
        scanf("%c", &a);
        switch (b)
        {
            case '+': sum += n; break;
            case '-': sum -= n; break;
            case '*': sum *= n; break;
            case '/': sum /= n; break;
        }
        b = a;
        if(a == '=')
            break;
    }
    printf("%d", sum);
    return 0;
}
*/

//サイトの答え
int main()
{
    int n, sum=0;
    char c;
    scanf("%d", &n);

    sum = n;
    while(1)
    {
        scanf("%c", &c);
        if (c == '=') break;

        scanf("%d", &n);
        if (c == '+') sum += n;
        else if (c == '-') sum -= n;
        else if (c == '*') sum *= n;
        else if (c == '/') sum /= n;
    }
    printf("%d", sum);
    return 0;
}