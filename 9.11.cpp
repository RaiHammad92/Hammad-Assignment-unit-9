#include <iostream>

// Function declaration
void swap(int &a, int &b);

int main() {
    int num1, num2;

    // Input two integers from the user
    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    // Display values before swapping
    std::cout << "Before swapping: " << std::endl;
    std::cout << "First integer: " << num1 << std::endl;
    std::cout << "Second integer: " << num2 << std::endl;

    // Call the function to swap the values
    swap(num1, num2);

    // Display values after swapping
    std::cout << "After swapping: " << std::endl;
    std::cout << "First integer: " << num1 << std::endl;
    std::cout << "Second integer: " << num2 << std::endl;

    return 0;
}

// Function definition
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}