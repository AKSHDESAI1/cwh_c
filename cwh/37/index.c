#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} harry, ravi, aksh;

// struct Student harry, ravi;

void print()
{
    printf("Marks of Harry is %d", harry.marks);
}

int main()
{

    // printf("Tutorial 37:- Structures in C");

    harry.id = 1;
    ravi.id = 2;

    harry.marks = 20;
    ravi.marks = 30;

    harry.fav_char = 'a';
    ravi.fav_char = 'b';

    printf("Harry got %c marks.\n", harry.fav_char);
    harry.fav_char = 'b';
    printf("Harry got %c marks.\n", harry.fav_char);

    strcpy(harry.name, "Aksh Desai");
    printf("Harry name is %s.\n", harry.name);

    print();

    printf("Aksh Marks - %d\n", aksh.marks);
    printf("Aksh Name - %s\n", aksh.name);
    printf("Aksh Fav Char - %c\n", aksh.fav_char);
    return 0;
}