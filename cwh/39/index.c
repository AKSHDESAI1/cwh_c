#include <stdio.h>
#include <string.h>

union Student
{
    char name[34];
    int id;
    int marks;
    char fav_char;
};

int main()
{

    printf("Tutorial 39:- Unions in C\n");

    union Student s1;

    // s1.id = 1;12
    // s1.marks = 40;
    // strcpy(s1.name, "harry");
    // s1.fav_char = '';

    printf("id is %d.\n", s1.id);
    printf("marks is %d.\n", s1.marks);
    printf("fav_char is %c.\n", s1.fav_char);
    printf("name is %s.\n", s1.name);

    return 0;
}