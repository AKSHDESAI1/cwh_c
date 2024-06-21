#include <stdio.h>

int sum(int a, int b); // Declaration of C

void print_Star(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}

int takeNumber()
{
    int i;
    printf("Enter the number:- ");
    scanf("%d", &i);
    return i;
}

int main()
{

    int a, b, c;
    a = 4;
    b = 6;
    c = sum(a, b); // Call

    // print_Star(7);

    // c = takeNumber();
    printf("The number entered by user is %d\n", c);

    return 0;
}

int sum(int a, int b)
{
    return a + b; // Definition of C
}