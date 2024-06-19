#include <stdio.h>

void printString(char str[])
{

    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c\n", str[i]);
        i++;
    }
}

int main()
{

    // printf("Tutorial 34 - Strings in C Language. \n");
    // char str[] = {'h', 'a', 'r', '\0'};
    // printf("The value of str variable is %s \n", str);
    // printf("The value of str variable is %c \n", str[0]);
    // printf("The value of str variable is %c \n", str[1]);
    // printf("The value of str variable is %c \n", str[2]);
    // printf("The value of str variable is %c \n", str[3]);
    // printf("The value of str variable is %c \n", str[4]);
    // printf("The value of str va riable is %c \n", str[5]);

    // char str[3] = {'h', 'a', '\0'};
    // printf("%s", str);

    // char str[] = {'h', 'a', 'r', 'r', 'y', '\0'};

    // printString(str);

    char str[6] = "harry";
    // printf("%s", str);
    printString(str);
    return 0;
}