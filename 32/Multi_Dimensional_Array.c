#include <stdio.h>

void func3(int (*ptr)[2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%dth - row & %dth - Column :- %d\n", i, j, *(&ptr[i][j]));
        }
    }
}

int main()
{

    printf("Multi Dimensinal Array Concept. \n");

    int arr[][2] = {
        {2, 13},
        {9, 3}};

    func3(arr);

    return 0;
}