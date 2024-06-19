#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int greater(char char1, char char2)
{
    // For rock, paper, scissors :- Returns 1 if c1>c2 and 0 otherwise. If c1 == c2 it will return -1.

    if (char1 == char2)
    {
        printf("\n  a1 \n");
        return -1;
    }

    if ((char1 == 'r') && (char2 == 's'))
    {
        printf("\n a2  \n");
        return 1;
    }
    else if ((char1 == 'r') && (char2 == 'p'))
    {
        printf("\n a3  \n");
        return 0;
    }

    else if ((char1 == 'p') && (char2 == 'r'))
    {
        printf("\n  a4 \n");
        return 1;
    }
    else if ((char1 == 'p') && (char2 == 's'))
    {
        printf("\n  a5 \n");
        return 0;
    }

    else if ((char1 == 's') && (char2 == 'p'))
    {
        printf("\n a6  \n");
        return 1;
    }
    else if ((char1 == 's') && (char2 == 'r'))
    {
        printf("\n a7  \n");
        return 0;
    }
}

int main()
{
    int playerScore = 0, compSocore = 0, temp;
    char playerChar, compChar;
    char dict[] = {'r', 'p', 's'};

    printf("Welcome to the Rock, Paper, Scissors.\n");

    for (int i = 0; i < 3; i++)
    {
        // Take player's 1 input
        printf("Player 1's Turn:\n");
        printf("Choose 1 for Rock, 2 for Paper and 3 for Scissors\n");
        scanf(" %d", &temp);
        getchar();

        playerChar = dict[temp - 1];
        printf("You choose %c\n\n", playerChar);

        // Generate Computer's Input
        printf("Computer 's Turn:\n");
        printf("Choose 1 for Rock, 2 for Paper and 3 for Scissors\n");
        temp = generateRandomNumber(3) + 1;
        compChar = dict[temp - 1];
        printf("Computer choose %c\n", compChar);

        if (greater(playerChar, compChar) == 1)
        {
            playerScore += 1;
            printf("\nYou Got it\n\n");
        }
        else if (greater(playerChar, compChar) == 0)
        {
            compSocore += 1;
            printf("\nComputer Got it\n\n");
        }
        else
        {
        }

        printf("YourScore is %d. Computer Score is %d.", playerScore, compSocore);

        printf("\n------------ \n\n");
    }

    printf("The total score of Player is %d and Computer is %d. \n\n", playerScore, compSocore);

    if (playerScore > compSocore)
    {
        printf("You win.");
    }
    else if (compSocore > playerScore)
    {
        printf("Computer win.");
    }
    else
    {
        printf("No One win.");
    }
    return 0;
}
