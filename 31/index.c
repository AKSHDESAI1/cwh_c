// #include <stdio.h>

// void fun()
// {
//     // printf(x);
// }

// int main()
// {

//     int x = 5;
//     // printf("");
//     // fun();

//     int *a = &x;
//     printf("aksh %d\n", a);
//     printf("aksh %d\n", *(&x));
//     return 0;
// }

#include <stdio.h>

void changeValue(int *address)
{
    *address = 99;
}

int main()
{

    // printf("Tutorial 31 - Cal By Value & Call By Reference.\n");

    int a = 34, b = 56;

    printf("The Value of previous a is %d.\n", a);
    changeValue(&a);
    printf("The Value of now a is %d.\n", a);

    return 0;
}