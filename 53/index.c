#include <stdio.h>

int main()
{
    // int *ptr = NULL;

    // printf("AKSH DESAI ");
    // printf("AKSH DESAI - %d", ptr);

    int a = 34;
    // int* ptr = &a;
    int *ptr;

    int c = 1129;
    int d = 56;

    // Error Handling.
    if (ptr != NULL)
    {
        printf("Address of a is %d.\n", ptr);
        printf("Address of a is %d.\n", *ptr);
    }
    else
    {
        printf("Pointer is a NULL Poniter and cannot be a dereferenced.");
    }

    return 0;
}