#include <stdio.h>
#include <stdlib.h>

int main()
{

    int chars, i = 0;

    char *ptr;
    char a, b;

    // while (i < 3)
    // {
    printf("Enter the number of Characters in your Employee Id\n");
    scanf("%d", &chars);

    printf("Enter the value of a.\n");
    scanf("%c", &a);

    getchar();
    // printf("Value of a is %c\n", a);
    // scanf("\n");
    // printf("Value of a is %c\n", a);

    // printf("Enter the value of b.\n");
    scanf("%c", &b);

    getchar();
    // printf("Value of b is %c\n", b);
    // scanf("\n");
    printf("Value of b is %c\n", b);

    ptr = (char *)malloc((chars + 1) * sizeof(char));

    printf("Enter your Employee Id\n");
    scanf("%s", ptr);
    printf("Value you written over here is %s.\n\n", ptr);

    free(ptr);

    i = i + 1;
    // }

    return 0;
}
