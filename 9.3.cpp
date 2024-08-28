#include <iostream>

// Function declaration
void displayTable(int number);

int main() {
    int num;

    // Input a number from the user
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Call the function to display the table of the number
    displayTable(num);

    return 0;
}

// Function definition
void displayTable(int number) {
    std::cout << "Multiplication table for " << number << " is:\n";
    for (int i = 1; i <= 10; ++i) {
        std::cout << number << " x " << i << " = " << (number * i) << std::endl;
    }
}