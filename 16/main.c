#include <stdio.h>

int main()
{

    // -------- Example: 1 --------------

    // label:
    //     printf("Inside Label Statement\n");
    //     goto end;

    // printf("Tutorial 16 - Goto Statement\n");
    // goto label;

    // end:
    //     printf("We are at end.");

    // ---------- Example 2 ------------------
    
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", i);

        for (int j = 0; j < 8; j++)
        {
            printf("%d. Enter the number. Enter 0 to exit.", j);
            int num;
            scanf("%d", &num);

            if (num == 0)
                goto end;
        }
        
    }

    end:
        // printf("\nProgram end successfully");

    return 0;
}