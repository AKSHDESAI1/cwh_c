#include <stdio.h>
#include <stdlib.h>

int *functionDangling()
{
    int a, b, sum;
    a = 34;
    b = 364;
    sum = a + b;
    return &sum;
}

int main(int argc, char const *argv[])
{

    // Case 1: De allocation of a memory block.

    // char ptr[] = "aksh";
    // printf("%d", sizeof(ptr));

    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[2] = 45;

    for (int i = 0; i < 6; i++)
    {
        printf("%d - %d.\n", i, ptr[i]);
    }

    free(ptr); // ptr is now a dangling pointer.
    ptr = NULL;

    // ptr = (int *)realloc(ptr, 10 * sizeof(int));

    printf("after\n");

    for (int i = 0; i < 6; i++)
    {
        printf("%d - %d.\n", i, ptr[i]);
    }

    // Case 2: Function returning local variable address.
    int *dangPtr = functionDangling(); // dangptr is now a dangling pointer.
    // printf("%d", dangPtr);

    // Case 3: If a variale goes out of scope
    int *danglingptr3;

    {
        int a = 12;

        danglingptr3 = &a;
        // printf("1. Address and value of danglingptr3 is %d - %d.\n", danglingptr3, *danglingptr3);
    }

    // Hence variable "a" goes out of scope which means danglingptr3 is pointing to a location which is freed and hence danglingotr3 is now a dangling pointer.

    printf("2. Address and value of danglingptr3 is %d - %d.\n", danglingptr3, *danglingptr3);

    return 0;
}
