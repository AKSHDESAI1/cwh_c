#include <stdio.h>

int fibonacci_iterative(int n)
{

    int previous = 0, next = 1, between;
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    for (int i = 2; i <= n; i++)
    {
        between = previous;
        previous = next;
        next += between;
    }

    return next;
}

int main()
{
    while (1)
    {
        /* code */
        int value;

        scanf(" %d", &value);
        printf("Fibonacci Iterative Approach -  %d", fibonacci_iterative(value));
    }

    return 0;
}