#include <stdio.h>

int main() {
    int n, sum = 0;

    // Prompt the user to enter the value of n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate the sum of natural numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Display the sum
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
