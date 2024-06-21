#include <stdio.h>

int main(int argc, char const *argv[])
{
    

    int a = 10;
    int *a1 = &a;
    int **b = &a1;
    int ***c = &b;

    printf("%d %d %d %d", b, *(&b), &a1, a);
    return 0;
}
