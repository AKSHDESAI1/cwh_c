#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Use of calloc

    int *ptr;
    int n;

    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);
    int temp = n;

    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
    {
        printf("Memory Successfully allocated.\n");
        // exit(0);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d. - %d.\n", i + 1, ptr[i]);
    }

    printf("Enter the size of the new array you want to create\n");
    scanf("%d", &n);

    free(ptr);
    
    // realloc
    ptr = (int *)realloc(ptr, n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
    {
        printf("Memory Successfully allocated.\n");
    }

    for (temp; temp < n; temp++)
    {
        scanf("%d", &ptr[temp]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("New Array at %d. - %d.\n", i + 1, ptr[i]);
    }

    printf("\n size of ptr is %d", n * sizeof(ptr));

    free(ptr);
    return 0;
}
