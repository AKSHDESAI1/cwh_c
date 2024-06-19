#include <stdio.h>
#include <string.h>

int main()
{

    char arr[3442];
    char str = "<h1> aksh </h1>";

    arr[0] = 'a';
    arr[1] = 'a';
    arr[2] = 'a';
    // strcpy(arr[3], str);

    for (int i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            // strcpy(arr[3], str[i]);
            arr[0] = str[i];
        }
    }

    printf("%s", arr);

    return 0;
}