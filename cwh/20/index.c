#include <stdio.h> 


void print_Table(int n){
    for (int i = 1; i < 11; i++)
    {
        printf("%d * %d = %d. \n", n, i, n*i);
    }
}


int main() {
    int ans;

    printf("Enter the number you want to \
    print Multiplication Table of:- ");
    scanf("%d", &ans);

    // Call the Function 
    print_Table(ans);   

    return 0;
}