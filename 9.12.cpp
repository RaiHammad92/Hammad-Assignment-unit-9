#include <iostream>

// Function declaration
char findGrade(int marks);

int main() {
    int marks;

    // Input marks from the user
    std::cout << "Enter the marks: ";
    std::cin >> marks;

    // Call the function to find the grade
    char grade = findGrade(marks);

    // Display the grade
    std::cout << "The grade is: " << grade << std::endl;

    return 0;
}

// Function definition
char findGrade(int marks) {
    if (marks >= 80) {
        return 'A';  // Grade A for 80 or above marks
    } else if (marks >= 60) {
        return 'B';  // Grade B for 60 to 79 marks
    } else if (marks >= 40) {
        return 'C';  // Grade C for 40 to 59 marks
    } else {
        return 'F';  // Grade F for below 40 marks
    }
}