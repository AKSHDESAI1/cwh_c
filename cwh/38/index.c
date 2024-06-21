#include <stdio.h>

typedef struct Student
{
    int id;
    float fav_num;
} a;

int main()
{

    a aksh;
    aksh.id = 20;
    aksh.fav_num = 201.35;

    printf("%d\n", aksh.id);

    printf("Tutorial 38 - Typedef in C\n");

    /*
    Syntax:-
    typedef <existing_name> <alias_name>
    */

    typedef float ft;
    ft a1 = 25.40;
    printf("%.2f\n", a1);

    typedef int integer;
    int a = 23;
    integer b = 35;

    printf("valuse of a is %d\n", a);
    printf("valuse of b is %d\n", b);

    // int* a11, a22;
    typedef int*  intptr;
    intptr a11, a22;

    int a33 = 10;

    a11 = &a33;
    a22 = &a33;

    printf("%d\n", *a11);
    printf("%d\n", *a22);

    return 0;
}