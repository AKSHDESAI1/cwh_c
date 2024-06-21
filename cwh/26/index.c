#include <stdio.h>

int main()
{
    printf("Let's learn about Pointers.\n");

    int a = 76;
    int *ptra = &a;

    // printf("The value of a is %d.\n", a);
    printf("The value of *ptra is %d.\n", ptra);
    printf("The value of *ptra is %x.\n", ptra);
    // printf("The value of d ptra is %d.\n", ptra);
    printf("The value of x ptra is %x.\n", &a);
    printf("The value of &ptra is %d.\n", &a);

    // int *ptr2;
    // // int *ptr3 ;
    // int *ptr3 = NULL;
    // printf("ptr2 is %d.\n", ptr2); // garbage value
    // printf("ptr3 is %p.\n", ptr3);
    // printf("ptr3 is d.\n");
    // printf("aksh");

    return 0;
}