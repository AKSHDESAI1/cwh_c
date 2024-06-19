// Exercise 2:- Units & Conversions in C

/*
    kms to miles
    inches to foot
    cms to inches
    pounds to kgs
    inches to meters
*/

#include <stdio.h>

float Kms_to_Miles(float n)
{
    return (0.621371 * n);
}

float Inches_to_Foot(float n)
{

    return (0.0833333 * n);
}

float Cms_to_Inches(float n)
{

    return (0.393701 * n);
}

int Pounds_to_Kgs(float n)
{

    return (0.453592 * n);
}

float Inches_to_Meters(float n)
{

    return (0.0254 * n);
}

int main()
{

    char choice;
    float value, ans;

    printf("What do you want to do:- \n");

    while (1)
    {
        printf("\nEnter;\n1. Kms to Miles \n2. Inches to Foot\n3. Cms to Inches\n4. Pounds to Kgs\n5. Inches to Meters\n6. q for quit.\n");

        printf("Enter the number:-");
        scanf(" %c", &choice);

        switch (choice)
        {
        case '1':
            printf("Enter the number that you want to convert with: ");
            scanf(" %f", &value);
            ans = Kms_to_Miles(value);
            printf("Miles of %.2f kms is %.2f. \n", value, ans);
            break;

        case '2':
            printf("Enter the number that you want to convert with: ");
            scanf(" %f", &value);
            ans = Inches_to_Foot(value);
            printf("Foot of %.2f Inches is %.2f. \n", value, ans);
            break;

        case '3':
            printf("Enter the number that you want to convert with: ");
            scanf(" %f", &value);
            ans = Cms_to_Inches(value);
            printf("Inches of %.2f Cms is %.2f. \n", value, ans);
            break;

        case '4':
            printf("Enter the number that you want to convert with: ");
            scanf(" %f", &value);
            ans = Pounds_to_Kgs(value);
            printf("Kgs of %.2f Pounds is %.2f. \n", value, ans);
            break;

        case '5':
            printf("Enter the number that you want to convert with: ");
            scanf(" %f", &value);
            ans = Inches_to_Meters(value);
            printf("Meters of %.2f Inches is %.2f. \n", value, ans);
            break;

        case '6':
            goto end;
            break;

        case 'q':
            goto end;
            break;

        default:
            printf("\nInvalid input\nPlease enter a valid option:\n");
            continue;
        }
    }

end:
    printf("\nThank you. ");

    return 0;
}