// #include <stdio.h>

// int main()
// {

//     printf("Tutorial 35 - String Functions & string.h Library\n");

//     // char str[5] = {'h', 'a', 'r', 'r', '\0'};
//     char str[8] = {"harry ."};
//     printf("%s", str);

//     return 0;
// }

// ---------------------------

#include <stdio.h>
#include <string.h>

int main()
{

    char s1[] = "absh1";
    char s2[] = "absh1";

    // char s3[1];

    // printf("%s", strcat(s1, s2));
    // puts(strcat(s1, s2));

    // printf("%d", strlen(s2));
    // printf("%s\n", strrev(s1));

    // puts(strrev(s2));

    // strcpy(s3, s1);
    // puts(s3);

    printf("%d", strcmp(s1, s2));
    return 0;
}