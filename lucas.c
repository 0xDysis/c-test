#include <stdio.h>

// Function to return the nth term in the Lucas sequence
int lucas(int n) {
    if (n == 0)
        return 2;
    else if (n == 1)
        return 1;
    else
        return lucas(n - 1) + lucas(n - 2);
}

int main() {
    int n, i;

    // Ask the user for the number of terms they want
    printf("Enter the number of terms you want in the Lucas sequence: ");
    scanf("%d", &n);

    // Print the first n terms in the Lucas sequence
    for (i = 0; i < n; i++) {
        printf("%d ", lucas(i));
    }

    return 0;
}