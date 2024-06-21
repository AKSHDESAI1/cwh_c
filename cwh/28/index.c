#include <stdio.h>

int fibonacci_recursive(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
    }
}

int fibonacci_iterative(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        int a = 0, b = 1, prev;

        for (int i = 3; i <= n; i++)
        {
            prev = a;
            a = b;
            b = b + prev;
        }
        return b;
    }

    return 0;
}

int main()
{

    printf("Tutorial 28:- Recursive and Iteratrive Approach of Fibonacci Series:- \n");

    // printf("%d\n", fibonacci_recursive(42));
    printf("%d\n", fibonacci_iterative(42));
    return 0;
}