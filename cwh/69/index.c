#include <stdio.h>
#include <string.h>
#include "replaceWork.c"

int main()
{
    char str2[334];

    printf("Video no 69.\n");

    FILE *ptr = NULL;
    ptr = fopen("bill.txt", "r");

    char str = fgetc(ptr);
    str2[0] = str;

    int i = 1;
    while (str != EOF)
    {

        str = fgetc(ptr);
        str2[i] = str;
        i++;
    }

    str2[strlen(str2) - 2] = '\0';
    fclose(ptr);

    printf("second string is %s\n", str2);

    replaceFun(str2, "aksh", "ds121");
    printf("second is %s", str2);

    return 0;
}
