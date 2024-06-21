#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(int num)
{
    char strin[20];
    int original = num;
    // sprintf(strin, "%d", num);

    int reversed = 0;

    while (num != 0)
    {
        reversed = (reversed * 10) + (num % 10);
        num /= 10;
    }

    if (original == reversed)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int number;
    printf("Enter a number to check whether it is a palindrome or not \n");
    scanf("%d", &number);

    // Your task is to implement this function
    if (isPalindrome(number))
    {
        printf("This number is a palindrome\n");
    }
    else
    {
        printf("This number is not a palindrome\n");
    }

    return 0;
}
