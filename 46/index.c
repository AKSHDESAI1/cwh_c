#include <stdio.h>

struct Driver
{
    char name[34];
    char dlNo[45];
    char route[47];
    int kms;
};

int main()
{

    struct Driver d1, d2, d3;

    printf("Enter the details of the drivers\n");

    // Details of First Driver.
    printf("Enter the name of first drivers\n");
    scanf("%s", &d1.name);

    printf("Enter the dlNo of first drivers\n");
    scanf("%s", &d1.dlNo);

    printf("Enter the route of first drivers\n");
    scanf("%s", &d1.route);

    printf("Enter the Number of kms of first drivers\n");
    scanf("%s", &d1.kms);

    // Details of Second Driver.
    printf("Enter the name of second drivers\n");
    scanf("%s", &d1.name);

    printf("Enter the dlNo of first drivers\n");
    scanf("%s", &d1.dlNo);

    printf("Enter the route of first drivers\n");
    scanf("%s", &d1.route);

    printf("Enter the Number of kms of first drivers\n");
    scanf("%s", &d1.kms);

    // Details of Second Driver.
    printf("Enter the name of third drivers\n");
    scanf("%s", &d1.name);

    printf("Enter the dlNo of first drivers\n");
    scanf("%s", &d1.dlNo);

    printf("Enter the route of first drivers\n");
    scanf("%s", &d1.route);

    printf("Enter the Number of kms of first drivers\n");
    scanf("%s", &d1.kms);

    return 0;
}