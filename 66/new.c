#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp = NULL;
    fp = fopen("letter.txt", "r");

    char *str1;

    char a = fgetc(fp);
    // str1[0] = a;
    // str1[1] = '\0';
    // printf("hehe %c", a);
    // printf("hehe %s", str1);

    // a = fgetc(fp);
    // str1[1] = a;
    // str1[2] = '\0';

    int i = 1;
    while (i <= 1)
    {
        a = fgetc(fp);
        str1[0] = a;
        printf("%c", a);
        i++;
    }

    str1[1] = '\0';
    // str1[2] = '\0';

    // printf("\nstring is %s\n", str1);
    // printf("value of d is %d.", i);

    // str1[6] = '/0';

    // printf("%s", str1);

    // str1[0] = 'a';
    // str1[1] = 'b';
    // str1[2] = 'c';
    // str1[3] = 'd';
    // str1[4] = 'e';
    // str1[5] = '\0';
    // str[2]

    // strcpy(str1, b);
    // strcat(str1, &a);
    // strlen(str1);

    // printf("Value of a is %c.", a);
    // printf("Value of str is %s.", str1);
    // printf("Value of str is %d.", strlen(str1));

    fclose(fp);

    return 0;
}