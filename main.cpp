#include <iostream> // Include the iostream library to use input/output streams

// Function prototype for calculating the greatest common divisor (GCD)
int calculateGCD(int, int);

int main() {
    int number1, number2; // Declare variables to store the two numbers

    // Prompt the user to enter two positive integers
    std::cout << "\nEnter the positive integers: ";
    std::cin >> number1 >> number2; // Read the two integers from user input

    // Output the GCD of the two numbers
    std::cout << "\nGCD of the two numbers (" << number1 << " , " << number2 << "): " << calculateGCD(number1, number2);
    getchar(); // Wait for a key press before exiting
    return 0; // Return 0 to indicate successful execution
}

// Function to calculate the greatest common divisor (GCD) using the Euclidean algorithm
int calculateGCD(int num1, int num2) {
    int remainder; // Variable to store the remainder during the calculation

    // Loop until the second number becomes zero
    while (num2 != 0) {
        remainder = num1 % num2; // Calculate the remainder of num1 divided by num2
        num1 = num2; // Assign the value of num2 to num1
        num2 = remainder; // Assign the remainder to num2
    }
    return num1; // Return the GCD
}

/*Explanation of Variable Names:
number1: The first integer input by the user.
number2: The second integer input by the user.
calculateGCD: Function to calculate the greatest common divisor.
num1: The first parameter for the GCD calculation.
num2: The second parameter for the GCD calculation.
remainder: Used to store the remainder during the Euclidean algorithm. */