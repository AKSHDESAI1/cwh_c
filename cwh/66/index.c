#include <stdio.h>

int main()
{
    printf("Tutorial 66 :- Automated Receipt Generater Exercise. \n");

    FILE *fp = NULL;
    fp = fopen("letter.txt", "r");

    char str[10];
    // fgets(str, 6, fp);
    // printf("%s", str);

    // gets(str);

    // putchar(str);
    char a = fgetc(fp);

    while (a != EOF)
    {

        a = fgetc(fp);
        printf("%c", a);
        /* code */
    }

    // if (feof(fp))
    //     printf("End of file reached.");
    // else
    //     printf("Something went wrong.");

    // fclose(fp);

    // getchar();

    // printf("%c", a);

    // char a = fgetc(fp);
    // printf("%c", a);

    // a = fgetc(fp);
    // printf("%c", a);

    // a = fgetc(fp);
    // printf("%c", a);

    // putchar('a');
    // putchar('\n');
    // putchar('b');

    fclose(fp);
    return 0;
}
