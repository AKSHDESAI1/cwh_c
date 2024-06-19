void readFile(FILE *ptr)
{
    char str[1000];
    fgets(str, 1000, ptr);
    printf("Output is %s", str);
    printf("\nFile Reading Successfully.");
}

int writeFile(FILE *ptr)
{
    int subChoice;
    char string[100];

    printf("\n Please, Confirm Your Choice.\n");
    printf("Select\n => 1 for Replace the Content\n => 2 for Append the Content.\n");

    scanf("%d", &subChoice);

    switch (subChoice)
    {
    case 1:
        // Override Content
        ptr = fopen("file.txt", "w");
        break;

    case 2:
        // Append the Content
        break;

    default:
        printf("Invalid Input");
        return 0;
        break;
    }

    printf("Enter the String you want to Override.\n");
    scanf("%s", &string);

    fputs(string, ptr);
    printf("The File has been Successfully Replaced with your Input!");
}

void eraseContent(FILE *ptr)
{
    ptr = fopen("file.txt", "w");
    fputs("", ptr);
    printf("All Content Erasing Successfully.");
}