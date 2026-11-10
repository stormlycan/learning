#include <stdio.h>

int main() {
    // Control Structures in C
    // This program will demonstrate if statements and loops
    
    // Declare variables
    int number;
    
    // Ask for a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Use an if statement to check if the number is positive, negative, or zero
    if (number > 0) {
        // Type the code to print that the number is positive here
    } else if (number < 0) {
        // Type the code to print that the number is negative here
    } else {
        // Type the code to print that the number is zero here
    }
    
    // Use a for loop to print numbers from 1 to the entered number
    printf("\nCounting from 1 to %d:\n", number);
    for (int i = 1; i <= number; i++) {
        // Type the code to print each number in the loop here
    }
    
    // Use a while loop to count down from the entered number to 1
    printf("\nCounting down from %d to 1:\n", number);
    int countdown = number;
    while (countdown > 0) {
        // Type the code to print each number in the countdown here
        // Don't forget to decrement the countdown variable!
    }
    
    return 0;
}