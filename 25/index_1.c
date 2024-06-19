// Fibonacci Series

#include <stdio.h>

int fibonacci_iterative(int n)
{

    int arr[] = {};

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            arr[0] = 0;
            printf("enter in i == 0 :- %d\n", arr[i]);
        }
        else if (i == 1)
        {
            arr[1] = 1;
            printf("enter in i == 1 :- %d\n", arr[i]);
        }
        else
        {
            arr[i] = arr[i - 1] + arr[i - 2];
            printf("enter in i == %d meow %d. arr[i-1] %d arr[i-2] %d\n", i, arr[i], arr[i], arr[i]);
        }
    }

    for (int j = 0; j < n; j++)
    {
        printf("arr[%d] is %d.\n", j, arr[j]);
    }

    // printf("arr[0] is %d\n", arr[0]);
    // printf("arr[1] is %d\n", arr[1]);
    return arr[n - 1];
}

int main()
{

    int value;
    printf("Enter the value that you want to find Fibonacci Series of:- ");
    scanf("%d", &value);

    int arr[value];
    printf("The Iterative Value at %d number is:- %d", value, fibonacci_iterative(value));

    return 0;
}