#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    if (strcmp(argv[1], "add") == 0) {
        int sum = 0;
        for (int i = 2; i < argc; i++) {
            sum += atoi(argv[i]);
        };
        printf("%d", sum);
    } else if (strcmp(argv[1], "add") == 0) {
        printf("%d", atoi(argv[2]) + atoi(argv[3]));
    } else if (strcmp(argv[1], "add") == 0) {
        printf("%d", atoi(argv[2]) + atoi(argv[3]));
    } else if (strcmp(argv[1], "add") == 0) {
        printf("%d", atoi(argv[2]) + atoi(argv[3]));
    } else {
        printf("Invalid Expression");
    }

    return 0;
}
