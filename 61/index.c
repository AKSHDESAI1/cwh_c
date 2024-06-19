#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m, n, sum = 0;
    int a[3][4], b[4][2], result[3][2];

    // Value of First Matrix
    printf("Enter the First Matrix.\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("Enter the Row - %d & Column - %d Element\t", i + 1, j + 1);
            scanf("%d", &a[i][j]);
            getchar();
        }
    }

    // Value of Second Matrix
    printf("\nEnter the Second Matrix.\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // printf("Enter the Row - %d & Column - %d Element\t", i + 1, j + 1);
            scanf("%d", &b[i][j]);
            getchar();
        }
    }

    // Multiply the Matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int sum = 0;
            for (int k = 0; k < 4; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
        }
    }

    // Print Result Matrix Multiplication
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The Value of %d-Row & %d-Column is %d.\n", i + 1, j + 1, result[i][j]);
        }
    }

    return 0;
}
