/*
Input:
<h1> This is a heading </h1>

Output:
This is a heading

Input:
<span> This is a heading2 </span>

Output:
This is a heading2
*/

#include <stdio.h>
#include <string.h>

void parser(char str[], int size)
{

    char newStr[size];

    int temp;
    for (int i = 0, j = 0; i < size; i++)
    {

        if (str[i] == ' ')
        {
            if (i == size - 1)
            {
                newStr[j] = '\0';
                temp = j;
            }
            continue;
        }

        newStr[j] = str[i];
        j += 1;

        if (i == size - 1)
        {
            newStr[j] = '\0';
            temp = j;
        }
    }

    strcpy(str, newStr);

    printf("newstr is %s. size is %d\n", newStr, sizeof(newStr));
}

int main()
{

    char string[] = "  aksh  ";

    printf("1.%s-%d\n", string, sizeof(string));

    parser(string, sizeof(string) - 1);

    printf("3.%s-%d\n", string, sizeof(string));

    for (int i = 0; i < sizeof(string); i++)
    {
        printf("%d - %c\n", i, string[i]);
    }
    printf("4.%s-%d\n", string, sizeof(string));

    return 0;
}