#include <stdio.h>
#include "printStatement.c"
#include "fileOperation.c"

int main()
{
    int c = PrintSentence();
    char string[34];

    FILE *ptr = NULL;
    ptr = fopen("file.txt", "a+");

    switch (c)
    {
    case 1:
        // Reading a File
        readFile(ptr);
        break;

    case 2:
        // Writing a File
        writeFile(ptr);
        break;

    case 3:
        // Erasing the Content
        eraseContent(ptr);
        break;

    default:
        return 0;
        break;
    }

    fclose(ptr);
    
    return 0;
}
