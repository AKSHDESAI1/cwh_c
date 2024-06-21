#include <stdio.h>
#include <string.h>

int main()
{

    char a[10];
    char b[10];
    char c[] = " is a friend of ";

    char firstText[10];
    char secondText[10];

    printf("Enter the Name of Friend 1:- ");
    gets(a);

    printf("Enter the Name of Friend 2:- ");
    gets(b);

    strcpy(firstText, strcat(a, c));
    strcpy(secondText, strcat(firstText, b));

    puts(secondText);

    return 0;
}