#include <stdio.h>

int main()
{

    printf("Pointers Arithmetic in C. - %d \n", sizeof(char));

    // int result;
    // int a = 34;
    // int *ptra = &a;

    // printf("%d\n", ptra);

    // result = ++(*ptra);

    // what is the answer of this ?

    // printf("%d\n", ptra);
    // ptra++;
    // ptra++;
    // printf("%d\n", ptra + 2);

    /*pre-increment and post-increment

    int a = 55, result;

    1. Pre-Increment
    result = ++a; // Prefix Notation.

    a = a + 1;
    result = a;

    ------------------------------------------

    2. Post-Increment
    result = a++;

    result = a;
    a = a + 1;

    printf("Value of result is %d.\n", result);
    */

    int arr[] = {1, 2, 3, 4, 5, 6};
    printf("1 %d\n", &arr);
    printf("2 %d\n", &arr[1]);
    printf("3 %d\n", arr + 1);
    printf("4 %d\n", &arr[0]);
    printf("5 %d\n", arr);
    printf("6 %d\n", arr);
    printf("7 %d\n", arr + 1);
    printf("8 %d\n", &arr);
    printf("9 %d\n", &arr[0]);
    printf("10 %d\n", &arr[1]);
    printf("11 %d\n", &arr + 1);

    // for (int i = 0; i < 6; i++)
    // {
    //     printf("Memory at %d location is %d.\n", i, &arr[i]);
    // }

    int *arrayptr = arr;
    printf("%d\n", arrayptr);
    arrayptr++;
    printf("%d\n", arrayptr);
    printf("%d\n", (&arr[1]));

    return 0;
}
