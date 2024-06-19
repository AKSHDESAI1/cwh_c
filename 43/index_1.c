#include <stdio.h>
#include <string.h>

void remSpaces(char *string);

void parser(char *str)
{
    int in = 0;
    int index = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '<')
        {
            in = 1;
            continue;
        }

        else if (str[i] == '>')
        {
            in = 0;
            continue;
        }

        if (in == 0)
        {
            str[index] = str[i];
            index += 1;
        }
    }

    str[index] = '\0';

    remSpaces(str);
}

void remSpaces(char *str)
{

    while (str[0] == ' ')
    {

        for (int i = 0; i < strlen(str); i++)
        {
            str[i] = str[i + 1];
        }
    }

    while (str[strlen(str) - 1] == ' ')
    {
        str[strlen(str) - 1] = '\0';
    }
}

int main()
{

    char string[] = "AKSH  ";

    printf("strlen(string) %d\n", strlen(string));

    // if (string[strlen(string) - 1] == ' ')
    // {
    //     string[strlen(string) - 1] = '\0';
    // }

    parser(string);

    printf("The Parse String is %s.", string);
    return 0;
}