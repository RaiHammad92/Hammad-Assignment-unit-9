#include <iostream>

// Function declaration
void displayMax(int num1, int num2);

int main() {
    int number1, number2;

    // Input two numbers from the user
    std::cout << "Enter the first number: ";
    std::cin >> number1;

    std::cout << "Enter the second number: ";
    std::cin >> number2;

    // Call the function to display the maximum number
    displayMax(number1, number2);

    return 0;
}

// Function definition
void displayMax(int num1, int num2) {
    if (num1 > num2) {
        std::cout << "The maximum number is: " << num1 << std::endl;
    } else if (num2 > num1) {
        std::cout << "The maximum number is: " << num2 << std::endl;
    } else {
        std::cout << "Both numbers are equal." << std::endl;
    }
}