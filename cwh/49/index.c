#include <stdio.h>
#include "temp.c"

int myFunc(int a, int b)
{
    // extern int sum;
    // int sum = 5;
    // sum = a + b;

    static int myvar;
    // return sum;
    myvar++;

    printf("The value of myvar is %d.\n", myvar);

    return myvar;
}
int sum = 343;

int a1 = 20;
int main()
{

    // Declaration - Telling the Compiler about the Variable (No Space Reserved)
    // Definition - Declaration + space reservation

    // int sum1 = myFunc(3, 5);

    // register int sum1 = 98;
    // printf("The value of sum is %d.\n", sum1);
    // printf("The value of a is %d.\n", a);

    // printf("The value of a is %d.\n", a);
    int sum1 = myFunc(3, 5);
    sum1 = myFunc(3, 5);
    sum1 = myFunc(3, 5);

    int a = 10;

    int *b = &a;
    printf("Value of a is %d", b);
    // aksh();
    // aksh();
    // aksh();
    return 0;
}