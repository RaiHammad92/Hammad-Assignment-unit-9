#include <iostream>

// Function declaration
void performOperation(double num1, double num2, char op);

int main() {
    double number1, number2;
    char operatorChar;

    // Input two numbers and an arithmetic operator from the user
    std::cout << "Enter the first number: ";
    std::cin >> number1;

    std::cout << "Enter the second number: ";
    std::cin >> number2;

    std::cout << "Enter an arithmetic operator (+, -, *, /): ";
    std::cin >> operatorChar;

    // Call the function to perform the operation
    performOperation(number1, number2, operatorChar);

    return 0;
}

// Function definition
void performOperation(double num1, double num2, char op) {
    switch (op) {
        case '+':
            std::cout << "Result: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Result: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "Result: " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                std::cout << "Result: " << num1 / num2 << std::endl;
            } else {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
            }
            break;
        default:
            std::cout << "Error: Invalid operator." << std::endl;
            break;
    }
}