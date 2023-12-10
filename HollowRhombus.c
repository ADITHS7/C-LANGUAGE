#include <stdio.h>

int main() {
    int n, i, j;

    // Input the size of the rhombus
    printf("Enter the size of the rhombus: ");
    scanf("%d", &n);

    // Upper part of the hollow rhombus
    for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars for the first and last row
        for (j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
