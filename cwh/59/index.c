#include <stdio.h>
#include "aksh.c"
#define PI 3.14
#define SQUARE(r) r *r // Macro

int main()
{
    aksh1();
    printf("Tutorial 59:- #define and #include Preprocessor Directives.\n");

    int var = PI;
    printf("Value of var is %d.\n", var);

    int r = 7;
    printf("The Square of Circle is %f", PI * SQUARE(r));
    return 0;
}