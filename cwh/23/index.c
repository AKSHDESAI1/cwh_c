#include <stdio.h>

int main()
{

    printf("Tutorial 23:- Arrays in C\n");
    // ------------------ 1 ------------------------
    // int marks[] = {34, 50, 40, 34, 99, 105};

    // marks[0] = 94;
    // // marks[1] = 50;

    // // printf("The Marks of student 1 is %d.", marks[1]);

    // for (int i = 0; i < 7; i++)
    // {
    //     printf("The Marks of Student %d is %d.\n", i + 1, marks[i]);
    // }

    // ----------------- 2. -----------------------
    // int marks[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Enter the number of student-%d Marks:- \n", i + 1);
    //     scanf("%d", &marks[i]);
    // }

    // printf("\nMarks are as follows:\n");
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Student-%d Marks:- %d \n", i + 1, marks[i]);
    // }

    // ----------------------- 3 -------------------------
    int marks[][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Row - %d and column - %d is:- \
        %d. \n",
                   i, j, marks[i][j]);
        }
    };

    return 0;
}