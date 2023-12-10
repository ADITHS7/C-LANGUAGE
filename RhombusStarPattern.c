#include <stdio.h>

int main() {
    int n, i, j;

    // Input the size of the rhombus
    printf("Enter the size of the rhombus: ");
    scanf("%d", &n);

    // Upper part of the rhombus
    for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part of the rhombus
    for (i = 1; i <= n - 1; i++) {
        // Print spaces
        for (j = 1; j <= i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
