#include <stdio.h>

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d index of array is:- %d.\n", i, array[i]);
    }
    array[0] = 100; // Very Important point that if you change any value here, it gets reflected in main().
    return 0;
}

void func2(int *ptr)
{
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", ptr[i]);
    }

    ptr[2] = 4567;
}

int main()
{

    // printf("Tutorial 32 - Passing Arrays As Function Arguments :-");

    int arr[] = {23, 13, 3};

    // printf("%d\n", arr[0]);

    // int aksh = func1(&arr[0]);
    // printf("aksh %d\n", aksh);

    // printf("1 %d\n", arr);
    // printf("2 %d\n", &arr);
    // printf("3 %d\n", &arr + 1);
    // printf("4 %d\n", arr + 1);

    // func2(&arr[0]);
    // func2(&arr[0]);

    int *ptr = arr;
    // printf("%d\n", ptr);
    // printf("%d\n", ptr[0]);
    // printf("%d\n", ptr[1]);

    // printf("%d\n", *(ptr + 2));

    func2(arr);
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}