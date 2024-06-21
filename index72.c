#include <stdio.h>

int Sum(int a, int b) {
    return a + b;   
}

int main(int argc, char const *argv[])
{
    printf("The Sum of 1 and 2 is %d\n", Sum(1,2));
    return 0;
}