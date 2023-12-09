#include <stdio.h>

int main() {
    int sideLength, i, j;

    // Get the side length from the user
    printf("Enter the side length of the square: ");
    scanf("%d", &sideLength);

    // Loop to print the hollow square pattern with diagonal
    for (i = 1; i <= sideLength; i++) {
        for (j = 1; j <= sideLength; j++) {
            // Print '*' for the border or when it's the first or last row
            // Also print '*' for the diagonal elements
            // Otherwise, print a space
            if (i == 1 || i == sideLength || j == 1 || j == sideLength || i == j || j == sideLength - i + 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}