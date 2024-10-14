#include <stdio.h>

int main() {
    int n, i;

    // Prompt user for the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Using a for loop to display cubes
    printf("\nCubes using for loop:\n");
    for (i = 1; i <= n; i++) {
        printf("Number is: %d and cube of %d is: %d\n", i, i, i * i * i);
    }

    // Using a while loop to display cubes
    printf("\nCubes using while loop:\n");
    i = 1; // Reset i for the while loop
    while (i <= n) {
        printf("Number is: %d and cube of %d is: %d\n", i, i, i * i * i);
        i++;
    }

    // Using a do-while loop to display cubes
    printf("\nCubes using do-while loop:\n");
    i = 1; // Reset i for the do-while loop
    do {
        printf("Number is: %d and cube of %d is: %d\n", i, i, i * i * i);
        i++;
    } while (i <= n);

    return 0; 
}

