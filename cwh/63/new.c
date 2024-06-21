#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to convert an integer to a string
void intToString(int number, char *str, int size)
{
    snprintf(str, size, "%d", number);
}

// Function to check if a string is a palindrome
int isPalindrome(char *str)
{
    int length = strlen(str);

    // Compare characters from the `beginning with characters from the end
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            return 0; // Not a palindrome
        }
    }

    return 1; // Palindrome
}

int main()
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Assuming a reasonable buffer size
    char str[20];

    // Convert the integer to a string
    intToString(number, str, sizeof(str));

    // Check if the string is a palindrome
    if (isPalindrome(str))
    {
        printf("%d is a palindrome.\n", number);
    }
    else
    {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}
