#include <iostream>

// Function declarations
int calculateSquare(int number);
int calculateCube(int number);

int main() {
    int num1, num2;

    // Input two integers from the user
    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    // Call the functions to calculate square and cube
    int square = calculateSquare(num1);
    int cube = calculateCube(num2);

    // Add the results and display the total
    int total = square + cube;
    std::cout << "The square of " << num1 << " is: " << square << std::endl;
    std::cout << "The cube of " << num2 << " is: " << cube << std::endl;
    std::cout << "The sum of the square and the cube is: " << total << std::endl;

    return 0;
}

// Function definitions
int calculateSquare(int number) {
    return number * number;
}

int calculateCube(int number) {
    return number * number * number;
}