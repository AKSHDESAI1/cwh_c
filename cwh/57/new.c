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

    printf("\nFor Second Array:- \n");

    int arr2[MP.SM_ROW][MP.SM_COLUMN];

    for (int i = 0; i < MP.SM_ROW; i++)
    {
        for (int j = 0; j < MP.SM_COLUMN; j++)
        {
            printf("Enter the Value of %d - Row && %d - Column.\n", i, j);
            scanf("%d", &arr2[i][j]);
            getchar();
        }
    }

    for (int i = 0; i < MP.SM_ROW; i++)
    {
        for (int j = 0; j < MP.SM_COLUMN; j++)
        {
            printf("Enter the Value of %d - Row && %d - Column is %d.\n", i, j, arr2[i][j]);
        }
    }

    return 0;
}
