#include <stdio.h>

int aksh;

int printFun()
{
    static int a;
    a++;

    return a;
}

int printFun2()
{
    static int a = 10;
    a += 2;
    return a;
}

int main()
{

    printf("Tutorial 49.\n");

    int b = printFun();
    printf("Value of b is:- %d.\n", b);

    b = printFun();
    printf("Value of b is:- %d.\n", b);

    b = printFun2();
    printf("Value of b is:- %d.\n", b);

    b = printFun2();
    printf("Value of b is:- %d.\n", b);

    b = printFun2();
    printf("Value of b is:- %d.\n", b);

    b = printFun();
    printf("Value of b is:- %d.\n", b);

    b = printFun();
    printf("Value of b is:- %d.\n", b);

    b = printFun2();
    printf("Value of b is:- %d.\n", b);

    printf("Value of aksh is:- %d.\n", aksh);

    return 0;
}