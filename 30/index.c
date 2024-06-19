/* Take input from the user and ask user to choose 0 for triangular star pattern and 1 for reversed triangular star pattern
Then print the pattern accordingly
*
**
***
**** -> Triangular star pattern


*****
****
***
**
* -> Reversed triangular star pattern

*/
#include <stdio.h>

void Triangular_Pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void Reversed_Triangular_Pattern(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int choice, line;

    printf("Enter your Choice:-\n =>1. Tiangular Pattern\n =>2. Reversed Triangular Pattern.\n\n");

    printf("Enter your Choice:-\t");
    scanf("%d", &choice);

    if (choice != 1 && choice != 2)
    {
        printf("Please Enter valid Choice. It Should be Either 1 or 2.");
        return 0;
    }

    printf("Enter the value of line which you want to print:-\t");
    scanf("%d", &line);

    switch (choice)
    {
    case 1:
        Triangular_Pattern(line);
        break;

    case 2:
        Reversed_Triangular_Pattern(line);
        break;

    default:
        printf("Please Enter valid Choice. It Should be Either 1 or 2.");
        break;
    }

    return 0;
}
