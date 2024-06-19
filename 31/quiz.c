#include <stdio.h>

void changeValue(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - (2 * *y);
}

int main()
{
    // printf("Quiz Time");

    int a = 4, b = 3;
    printf("The previous value of a and b is %d - %d.\n", a, b);
    changeValue(&a, &b);
    printf("The value of a and b is %d - %d.\n", a, b);

    return 0;
}