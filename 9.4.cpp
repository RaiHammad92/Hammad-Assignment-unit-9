#include <iostream>

// Function declaration
void displayPredecessorAndSuccessor(int number);

int main() {
    int num;

    // Input a number from the user
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Call the function to display the predecessor and successor of the number
    displayPredecessorAndSuccessor(num);

    return 0;
}

// Function definition
void displayPredecessorAndSuccessor(int number) {
    int predecessor = number - 1;
    int successor = number + 1;

    std::cout << "The predecessor of " << number << " is: " << predecessor << std::endl;
    std::cout << "The successor of " << number << " is: " << successor << std::endl;
}