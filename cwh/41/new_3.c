#include <stdio.h>
#include <string.h>

int parser(char *str)
{
    int i = 0;
    while (i <= strlen(str))
    {

        if (str[i - 1] == '>')
        {
            int j = i;
            while (j <= strlen(str))
            {
                printf("%c", str[j]);
                if (str[j + 1] == '<' && str[j + 2] == '/')
                {
                    return 0;
                }

                j++;
            }
        }

        i++;
    }

    // end:
    //     printf("");
}

int main()
{
    char str[3443];
    gets(str);
    parser(str);

    return 0;
}