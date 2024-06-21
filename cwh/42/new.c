#include <stdio.h>

int b = 34;

int ret()
{
    return 3 * 4;
}

int func(int b1)
{
    static int myvar = ret();
    printf("The value of myvar is %d\n", myvar);
    ++myvar;

    return b1 + myvar;
}

int main()
{

    int b = 344, val;

    // int val = func(b);
    for (int i = 0; i < 10; i++)
    {
        val = func(b);
        printf("valus of val is %d. \n", val);
    }

    int *ptr = &val;

    return 0;
}