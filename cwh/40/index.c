#include <stdio.h>

void revArray(int array[5])
{
    int temp;
    for (int i = 0; i < 5 / 2; i++)
    {
        temp = array[i];
        array[i] = array[4 - i];
        array[4 - i] = temp;
    }
}

int main()
{

    // printf("Exercise 5:- Reversal Array");

    int arr[] = {1, 2, 3, 4, 5};

    printf("Before Calling a Function. \n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }

    revArray(arr);

    printf("After Calling a Function. \n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}