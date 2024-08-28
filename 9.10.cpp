#include <iostream>

// Function declaration
void displayGrid(int rows, int columns, char character);

int main() {
    int numRows, numColumns;
    char ch;

    // Input the number of rows, columns, and character from the user
    std::cout << "Enter the number of rows: ";
    std::cin >> numRows;

    std::cout << "Enter the number of columns: ";
    std::cin >> numColumns;

    std::cout << "Enter a character to display: ";
    std::cin >> ch;

    // Validate input
    if (numRows <= 0 || numColumns <= 0) {
        std::cout << "Number of rows and columns must be positive integers." << std::endl;
        return 1; // Exit with error code
    }

    // Call the function to display the grid
    displayGrid(numRows, numColumns, ch);

    return 0;
}

// Function definition
void displayGrid(int rows, int columns, char character) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            std::cout << character << ' ';
        }
        std::cout << std::endl;
    }
}