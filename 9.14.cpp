#include <iostream>

// Function declaration
double calculateArea(double base, double height);

int main() {
    double base, height;

    // Input base and height of the triangle from the user
    std::cout << "Enter the base of the triangle: ";
    std::cin >> base;

    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;

    // Call the function to calculate the area
    double area = calculateArea(base, height);

    // Display the area
    std::cout << "The area of the triangle is: " << area << std::endl;

    return 0;
}

// Function definition
double calculateArea(double base, double height) {
    return 0.5 * base * height;
}