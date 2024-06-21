#include <stdio.h>
#include "new.c"

extern int globalVar; // Declaration of the global variable defined in new.c

int main()
{
    globalVar += 3;
    printf("Extern variable: %d\n", globalVar);
    return 0;
}