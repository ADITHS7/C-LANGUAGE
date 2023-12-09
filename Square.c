#include <stdio.h>

int main() {
    int sideLength, i, j;

    // Get the side length from the user
    printf("Enter the side length of the square: ");
    scanf("%d", &sideLength);

    // Loop to print the square pattern
    for (i = 1; i <= sideLength; i++) {
        for (j = 1; j <= sideLength; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
