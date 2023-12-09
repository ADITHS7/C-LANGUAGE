#include <stdio.h>

int main() {
    int sideLength, i, j;

    // Get the side length from the user
    printf("Enter the side length of the square: ");
    scanf("%d", &sideLength);

    // Loop to print the hollow square pattern
    for (i = 1; i <= sideLength; i++) {
        for (j = 1; j <= sideLength; j++) {
            // Print '*' for the border or when it's the first or last row
            // Otherwise, print a space
            if (i == 1 || i == sideLength || j == 1 || j == sideLength) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
