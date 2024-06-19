#include <stdio.h>

int main()
{

    FILE *ptr = NULL;

    // ********* Reading a File ***********
    // char string[34];
    // ptr = fopen("myfile.txt", "r");
    // fscanf(ptr, "%s", string); // Read the first word in the file into the variable 'string'

    // ******** Writing a File ***********
    char string[104] = "Swet aksh\n";
    ptr = fopen("swet.txt", "a+");
    fprintf(ptr, "%s", string); // Write the content of the variable 'string' to the file
    printf("The content of the file has %s", string);

    return 0;
}