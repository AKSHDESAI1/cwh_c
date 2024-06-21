#include <stdio.h>
#include <string>

/*
You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route
4. Kms
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
User structures.
*/

struct Details
{
    char name[30];
    char no[30];
    char route[30];
    char kms[30];
};

int main()
{

    struct Details driver[3];
    //  = {
    //     {"a", "b", "c", "d"},
    //     {"a", "b", "c", "d"},
    //     {"a", "b", "c", "d"}};

    for (int i = 0; i < 3; i++)
    {
        printf("%d. Enter Driver Details\n", i + 1);
        gets(driver[i].name);
        gets(driver[i].no);
        gets(driver[i].route);
        gets(driver[i].kms);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d Driver details is:- \n", i + 1);
        printf("name is %s.\n", driver[i].name);
        printf("no is %s.\n", driver[i].no);
        printf("route is %s.\n", driver[i].route);
        printf("kms is %s.\n", driver[i].kms);
    }

    // printf()
}
