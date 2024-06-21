#include <stdio.h>

void arrayRev(int *array, int size)
{
    int arr1[size];

    for (int i = 0; i < size; i++)
    {
        arr1[i] = array[i];
    }

    for (int i = 0, j = size - 1; j >= 0; i++, j--)
    {
        array[i] = arr1[j];
    }
}

int main()
{

    int arr[1000];
    int value;
    int num;

    printf("Enter the Size of array:-\t");
    scanf("%d", &value);

    for (int i = 0; i < value; i++)
    {
        printf("Enter %d value:-\t", i + 1);
        scanf("%d", &num);
        arr[i] = num;
    }

    printf("Before Calling a Function :-\n");

    for (int i = 0; i < value; i++)
    {
        printf("%d\n", arr[i]);
    }

    arrayRev(arr, value);

    printf("After Calling a Function :-\n");

    for (int i = 0; i < value; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}