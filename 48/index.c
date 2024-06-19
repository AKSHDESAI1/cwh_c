#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Dynamic Memory Allocation
    // ABC Pvt Ltd. manages employee records of other companies.
    // Employee Id can be of any length and it can contain any character
    // For 3 employees, you have to take 'length of employee id' as input in a length integer variable.
    // Then, you have to take employee id as an input and display it on screen.
    // Store the employee id in a character array which is allocated dynamically.
    // You have to create only one character array dynamically

    // EXAMPLE:
    // Employee 1:
    // Enter no of characters in your eId
    // 45
    // Dynamically allocate the character array.
    // take input from user

    // Employee 2:
    // Enter no of characters in your eId
    // 4
    // Dynamically allocate the character array.
    // take input from user

    // Employee 3:
    // Enter no of characters in your eId
    // 9
    // Dynamically allocate the character array.
    // take input from user

    int size;
    char *ptr;

    for (int i = 0; i < 3; i++)
    {
        printf("Employee %d\n", i);
        printf("Enter no of Character in your eId\n");

        scanf("%d", &size);

        if (i == 0)
        {

            ptr = (char *)malloc(size * sizeof(char));
        }
        else
        {
            ptr = (char *)realloc(ptr, size * sizeof(char));
        }
        if (!ptr)
        {
            printf("\nMemory not available.\n");
            exit(0);
        }
        printf("Enter your EID : \n");

        for (int j = 0; j < size; j++)
        {
            scanf(" %c", &ptr[j]);
        }

        for (int k = 0; k < size; k++)
        {
            printf("%c", ptr[k]);
        }

        printf("\n\n");
    }
    free(ptr);

    return 0;
}
