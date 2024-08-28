#include <iostream>
#include <cmath> // For the M_PI constant

// Function declaration
float circleArea(float radius);

int main() {
    float radius;

    // Input radius from the user
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // Validate input
    if (radius < 0) {
        std::cout << "Radius cannot be negative." << std::endl;
        return 1; // Exit with error code
    }

    // Call the function to calculate the area of the circle
    float area = circleArea(radius);

    // Display the result
    std::cout << "The area of the circle with radius " << radius << " is: " << area << std::endl;

    return 0;
}

// Function definition
float circleArea(float radius) {
    // Use the formula for the area of a circle: π * radius^2
    return M_PI * radius * radius;
}