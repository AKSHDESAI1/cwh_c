// Fibonacci Series

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



// Ex: - 0, 1, 1, 2, 3, 5, 8, 13, ...

int main()
{

    int value;
    printf("Enter the value:- ");
    scanf("%d", &value);

    printf("Answer:- %d",
    fibonacci_iterative(value));

    return 0;
}


