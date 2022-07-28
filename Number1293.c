#include <stdio.h>
int main(void)
{
    int i, n, score,max=0, min=100;
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &score);
        if (score > max)
            max = score;
        if (score < min)
            min = score;
    }
    printf("%d %d", max, min);
    return 0;
}