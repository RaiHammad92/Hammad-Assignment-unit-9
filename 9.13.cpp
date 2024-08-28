#include <iostream>

// Function declaration
int mul(int a, int b);

int main() {
    int num1, num2;
    char continueInput;

    do {
        // Input two integers from the user
        std::cout << "Enter the first integer: ";
        std::cin >> num1;

        std::cout << "Enter the second integer: ";
        std::cin >> num2;

        // Call the function to check if the second integer is a multiple of the first
        if (mul(num1, num2)) {
            std::cout << num2 << " is a multiple of " << num1 << "." << std::endl;
        } else {
            std::cout << num2 << " is not a multiple of " << num1 << "." << std::endl;
        }

        // Ask user if they want to continue
        std::cout << "Do you want to check another pair? (y/n): ";
        std::cin >> continueInput;

    } while (continueInput == 'y' || continueInput == 'Y');

    return 0;
}

// Function definition
int mul(int a, int b) {
    // Return 1 if b is a multiple of a, otherwise return 0
    if (a != 0 && b % a == 0) {
        return 1;
    }
    return 0;
}