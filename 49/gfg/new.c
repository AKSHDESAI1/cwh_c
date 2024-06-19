#include <stdio.h>

void fun1()
{
    int a = 34;
    printf("value of a is %d.\n", a);
}

void fun3()
{
    int a = 340768;
    printf("value of a is %d.\n", a);
}

void fun2()
{
    int x;
    printf("value of x is %d.\n", x);
}

int main()
{

    int b = 99;
    fun1();
    fun3();

    int q = 13;
    printf("value of q is %d.\n", q);
    fun2();
    return 0;
}