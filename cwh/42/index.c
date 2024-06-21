#include <stdio.h>

int a = 34;

int func1(int a)
{
    printf("The Address of variable a outside main function.  %d\n", &a);
    return a * 10;
}

int main()
{
    int a = 34;
    int b;

    printf("The Address of variable a inside main function.  %d\n", &a);

    b = func1(a);
    printf("Variable b is %d.", b);

    return 0;
}