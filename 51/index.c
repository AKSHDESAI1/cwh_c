#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int size;
char *ptr;
int yourTurn;
int ComputerTurn;
int yourPoints;
int computerPoints;

int generateRandomNumber(int n)
{
    srand(time(NULL)); // srand takes seed as an input and is defined inside stdlib.h
    ComputerTurn = rand() % n;

    ComputerTurn++;
    return ComputerTurn;
}

void Name()
{
    printf("Enter the length of name:- ");

    scanf("%d", &size);

    ptr = (char *)malloc((size + 1) * sizeof(char));

    printf("Enter your Name:- \n");
    scanf("%s", ptr);
}

void Rules()
{
    printf("Please Read the Instructions Carefully.\n");
    printf("=> There are two Players. One is you and Another is Computer.\n");
    printf("=> Enter\n ---> 1 for Rock\n ---> 2 for Paper\n ---> 3 for Scissors\n");
}

void CheckPolicy()
{

    if ((yourTurn != 1) && (yourTurn != 2) && (yourTurn != 3))
    {
        printf("Sorry! You have Entered Wrong Input.\n");
        printf("The Program is Terminated. Thank You.");

        exit(1);
    }
}

const char *SelectChoice(int n)
{
    if (n == 1)
    {
        return "Rock";
    }
    else if (n == 2)
    {
        return "Paper";
    }
    else if (n == 3)
    {
        return "Scissors";
    }

    else
    {
        return "Invalid";
        exit(1);
    }
}

void Points()
{
    if (yourTurn == 1 && ComputerTurn == 1)
    {
        printf("Oops! No one win.\n");
    }
    else if (yourTurn == 1 && ComputerTurn == 2)
    {
        printf("Computer win. \n");
        computerPoints++;
    }
    else if (yourTurn == 1 && ComputerTurn == 3)
    {
        printf("You win. \n");
        yourPoints++;
    }

    else if (yourTurn == 2 && ComputerTurn == 1)
    {
        printf("You win. \n");
        yourPoints++;
    }
    else if (yourTurn == 2 && ComputerTurn == 2)
    {
        printf("Oops! No one win.\n");
    }
    else if (yourTurn == 2 && ComputerTurn == 3)
    {
        printf("Computer win. \n");
        computerPoints++;
    }

    else if (yourTurn == 3 && ComputerTurn == 1)
    {
        printf("Computer win. \n");
        computerPoints++;
    }
    else if (yourTurn == 3 && ComputerTurn == 2)
    {
        printf("You win. \n");
        yourPoints++;
    }
    else if (yourTurn == 3 && ComputerTurn == 3)
    {
        printf("Oops! No one win.\n");
    }

    else
    {
        printf("Sorry for Some Inconvenience. \n");
        exit(0);
    }

    printf("Your Score:- %d. Computer Score:- %d.\n", yourPoints, computerPoints);
}

void process()
{

    int i = 0;
    while (i < 3)
    {

        printf("%d. %s's Turn\n", i + 1, ptr);
        scanf("%d", &yourTurn);

        CheckPolicy();

        const char *you = SelectChoice(yourTurn);
        printf("You Selected %s.\n", you);

        generateRandomNumber(3);

        const char *computer = SelectChoice(ComputerTurn);
        printf("Computer Selected %s.\n", computer);

        Points();

        printf("\n");
        i++;
    }
}

void Results()
{
    if (yourPoints > computerPoints)
    {
        printf("Final Results:- Congrats! You win . \n");
    }

    else if (yourPoints < computerPoints)
    {
        printf("Final Results:- Oops! Computer Win . \n");
    }

    else
    {
        printf("Final Results:- Sorry! Match is Draw. \n");
    }
}

int main()
{

    printf("Welcome to Rock, Paper, Scissors Game.\n\n");

    Name();

    printf("\nWelcome %s to this Game.\n\n", ptr);

    Rules();

    printf("\nNow Let's Start.\n\n");

    process();

    free(ptr);

    Results();

    printf("End of the program");
    return 0;
}