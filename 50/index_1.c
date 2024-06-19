#include <stdio.h>
#include <stdlib.h>

int main()
{

    char *b = (char *)malloc(4 * sizeof(char)); // 1 byte

    scanf("%s", b);
    printf("b is %s.\n", (b));
    // print Address ????

    return 0;
}