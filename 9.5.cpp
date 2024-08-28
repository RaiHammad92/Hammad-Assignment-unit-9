#include <iostream>

// Function declaration
unsigned long long factorial(int number);

int main() {
    int num;

    // Input a number from the user
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Ensure the number is non-negative
    if (num < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        // Call the function to calculate and display the factorial
        std::cout << "The factorial of " << num << " is: " << factorial(num) << std::endl;
    }

    return 0;
}

// Function definition
unsigned long long factorial(int number) {
    if (number == 0 || number == 1) {
        return 1;
    } else {
        return number * factorial(number - 1);
    }
}