#include <stdio.h>
#include <string.h>

char *replaceWord(const char *str, const char *oldWord, const char *newWord)
{
}

int main()
{

    FILE *ptr = NULL;
    ptr = fopen("bill.txt", "r");

    FILE *ptr2 = NULL;
    ptr2 = fopen("genBill.txt", "w");

    char str[200];
    fgets(str, 200, ptr);
    printf("The given bill template was: %s\n", str);

    // Call the replaceWord function and generate newstr
    char *newstr = str;
    fputs(newstr, ptr2);
    printf("The actual bill generated is: %s\n", newstr);

    fclose(ptr);
    fclose(ptr2);

    return 0;
}