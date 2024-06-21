#include <stdio.h>
#include <string.h>

int htmlParser(char *arr)
{
    int i = 0;
    while (i < strlen(arr))
    {
        if (arr[i - 1] == '>')
        {
            int j = i;

            while (j < strlen(arr))
            {
                if (arr[j] == ' ')
                {
                    j += 1;
                    if (arr[j + 1] == '<' && arr[j + 2] == '/')
                    {
                        return 0;
                    }
                    continue;
                }

                printf("%c", arr[j]);
                if (arr[j + 1] == '<' && arr[j + 2] == '/')
                {
                    return 0;
                }

                j += 1;
            }
        }

        i += 1;
    }
}

int main()
{

    printf("Tutorial 43:-\n");

    char arr[3443];
    gets(arr);

    htmlParser(arr);
    return 0;
}