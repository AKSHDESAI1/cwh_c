#include <stdio.h>
#include <stdlib.h>

struct matrix_points
{
    int FM_ROW;
    int FM_COLUMN;

    int SM_ROW;
    int SM_COLUMN;
} MP;

int main()
{
    printf("Welcome to the Rock, Paper & Scissors Game:- \n\n");

    // -------  Matrix_Size() ----------

    printf("Enter the Length of the Row of First Matrix:- \n");
    scanf("%d", &MP.FM_ROW);

    printf("Enter the Length of the Column of First Matrix:- \n");
    scanf("%d", &MP.FM_COLUMN);

    printf("\n");

    printf("Enter the Length of the Row of Second Matrix:- \n");
    scanf("%d", &MP.SM_ROW);

    printf("Enter the Length of the Column of Second Matrix:- \n");
    scanf("%d", &MP.SM_COLUMN);

    // ------- Matrix_Size ends -------

    // Check Policy Start

    if (MP.FM_COLUMN != MP.SM_ROW)
    {
        printf("Error! The number of columns in the first matrix must be equal to the number of the row of the second matrix\n");

        exit(0);
    }

    // Check Policy Ends

    // Matrix_Input() Start

    // printf("For First Array:- \n");

    int arr1[MP.FM_ROW][MP.FM_COLUMN];

    for (int i = 0; i < MP.FM_ROW; i++)
    {
        for (int j = 0; j < MP.FM_COLUMN; j++)
        {
            printf("Enter the Value of %d - Row && %d - Column.\n", i + 1, j + 1);
            scanf(" %d", &arr1[i][j]);
            getchar();
        }
    }

    printf("Matrix 1 is;\n");
    for (int i = 0; i < MP.FM_ROW; i++)
    {
        for (int j = 0; j < MP.FM_COLUMN; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    printf("\nFor Second Array:- \n");

    int arr2[MP.SM_ROW][MP.SM_COLUMN];

    for (int i = 0; i < MP.SM_ROW; i++)
    {
        for (int j = 0; j < MP.SM_COLUMN; j++)
        {
            printf("Enter the Value of %d - Row && %d - Column.\n", i + 1, j + 1);
            scanf("%d", &arr2[i][j]);
            getchar();
        }
    }

    printf("Matrix 2 is \n");

    for (int i = 0; i < MP.SM_ROW; i++)
    {
        for (int j = 0; j < MP.SM_COLUMN; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // Matrix Input Ends

    // InterChange_R_To_C() Starts

    int arr3[MP.SM_COLUMN][MP.SM_ROW];

    for (int i = 0; i < MP.SM_COLUMN; i++)
    {
        for (int j = 0; j < MP.SM_ROW; j++)
        {
            arr3[i][j] = arr2[j][i];
        }
    }

    // InterChange_R_To_C() ends

    // Print Interchange Matrix Start
    // printf("Interchange Matrix is \n");

    // for (int i = 0; i < MP.SM_COLUMN; i++)
    // {
    //     for (int j = 0; j < MP.SM_ROW; j++)
    //     {
    //         printf("%d ", arr3[i][j]);
    //     }
    //     printf("\n");
    // }
    // Print Interchange Matrix Ends

    // result Process Start
    int arr4[MP.FM_ROW][MP.SM_COLUMN];

    for (int i = 0; i < MP.FM_ROW; i++)
    {
        for (int j = 0; j < MP.SM_COLUMN; j++)
        {
            int sum = 0;
            // int two = 0;
            for (int k = 0; k < MP.SM_ROW; k++)
            {

                sum += arr1[i][k] * arr3[j][k];
                // two += arr1[i][k] * arr3[i][k];
            }
            int ans = sum;

            arr4[i][j] = ans;
        }
    }

    // result Process End

    // Print Result Start
    printf("\nResult Matrix is :- \n");
    for (int i = 0; i < MP.FM_ROW; i++)
    {
        for (int j = 0; j < MP.SM_COLUMN; j++)
        {
            printf("%d ", arr4[i][j]);
        }
        printf("\n");
    }

    // Print Result Ends
    printf("\n");
    return 0;
}