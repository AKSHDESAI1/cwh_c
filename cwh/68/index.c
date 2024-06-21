#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    // printf("The Value of argc is %d.\n", argc-1  );

    for (int i = 0; i < argc; i++)
    {
        printf("This argument at index number %d has a value of %s \n", i, argv[i]);
    }
    
    return 0;
}
