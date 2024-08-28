#include <iostream>

// Function declaration
bool isPrime(int number);

int main() {
    int num;

    // Input a number from the user
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Check if the number is prime or composite
    if (num <= 1) {
        std::cout << num << " is neither prime nor composite." << std::endl;
    } else if (isPrime(num)) {
        std::cout << num << " is a prime number." << std::endl;
    } else {
        std::cout << num << " is a composite number." << std::endl;
    }

    return 0;
}

// Function definition
bool isPrime(int number) {
    if (number <= 1) return false;  // 0 and 1 are not prime
    if (number <= 3) return true;   // 2 and 3 are prime
    if (number % 2 == 0 || number % 3 == 0) return false;  // Multiple of 2 or 3
    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) return false;
    }
    return true;
}