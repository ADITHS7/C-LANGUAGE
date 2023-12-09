#include <stdio.h>

int main() {
    int rows, i, j;

    // Get the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop to print the star pattern
    for (i = 1; i <= rows; i++) {
        // Print spaces before the stars
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= i; j++) {
            printf("* ");
        }

        // Move to the next line after each row is printed
        printf("\n");
    }

    return 0;
}
