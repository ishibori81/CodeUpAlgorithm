#include <stdio.h>

int main()
{
    /*
    //自分の回答
    char name[21];
    int age;
    char a;
    float b;

    //gets(name);
    scanf("%s\n", name);
    scanf("%d\n", &age);
    scanf("%c\n", &a);
    scanf("%f", &b);

    printf("%s\n", name);
    printf("%d\n", age);
    printf("%c\n", a);
    printf("%g", b);
    */
    
    //他の回答
    char name[20];
    int age;
    char c;
    double key;

    scanf("%s\n", name);
    scanf("%d\n", &age);
    scanf("%c\n", &c);
    scanf("%lf", &key);

    printf("%s\n%d\n%c\n%g\n", name, age, c, key);
    
    return 0;
}