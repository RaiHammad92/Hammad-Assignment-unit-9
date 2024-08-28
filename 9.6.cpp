#include <iostream>

// Function declarations
bool isPrime(int number);
bool isEven(int number);
bool isOdd(int number);

int main() {
    int num;

    // Input a number from the user
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Check and display whether the number is prime, even, or odd
    if (isPrime(num)) {
        std::cout << num << " is a prime number." << std::endl;
    } else {
        std::cout << num << " is not a prime number." << std::endl;
    }

    if (isEven(num)) {
        std::cout << num << " is an even number." << std::endl;
    } else {
        std::cout << num << " is an odd number." << std::endl;
    }

    return 0;
}

// Function to check if a number is prime
bool isPrime(int number) {
    if (number <= 1) return false;
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) return false;
    }
    return true;
}

// Function to check if a number is even
bool isEven(int number) {
    return number % 2 == 0;
}

// Function to check if a number is odd
bool isOdd(int number) {
    return number % 2 != 0;
}