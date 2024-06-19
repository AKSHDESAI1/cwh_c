#include <stdio.h>
// Recursive Function of Factorial Number
int factorial_num(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return (n * factorial_num(n - 1));
}

int main()
{
    int n;
    printf("Enter the number you want to print \
    Factorial Number of:- \n");

    scanf("%d", &n);
    printf("The factorial of %d is %d.", n, 
    factorial_num(n));

    return 0;
}