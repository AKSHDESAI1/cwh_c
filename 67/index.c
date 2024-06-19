#include <stdio.h>
#define x main // macros

int x()
{
    FILE *ptr = NULL;
    char name[34];

    // **********  fgetc Function ***********
    ptr = fopen("file.txt", "r+");
    // char c1 = fgetc(ptr);
    // printf("%c", c1);

    // **********  fgets function ***********
    fgets(name, 10, ptr);
    printf("%s", name);

    // **********  fputc function ***********
    // fputc('a', ptr);

    // **********  fputs function ***********
    // fputs("Hello Aksh Desai", ptr);

    fclose(ptr);
    return 0;
}
