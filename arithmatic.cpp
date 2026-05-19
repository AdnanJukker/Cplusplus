#include <iostream>

int main(){

    /*
    arithmetic operators are used to perform mathematical operations on variables and values.
    The basic arithmetic operators in C++ include:
    + (addition)
    - (subtraction)
    * (multiplication)
    / (division)
    % (modulus)
    These operators can be used with various data types, such as integers and floating-point numbers.
    */
   int a = 10;
   int b = 5;
   int c = a + b; // Addition
    int d = a - b; // Subtraction
    int e = a * b; // Multiplication
    int f = a / b; // Division
    int g = a % b; // Modulus
    std::cout << "a + b = " << c << '\n';
    std::cout << "a - b = " << d << '\n';
    std::cout << "a * b = " << e << '\n';
    std::cout << "a / b = " << f << '\n';
    std::cout << "a % b = " << g << '\n';

    int students = 20;

    // students = students +1;
    // students += 1; // Using compound assignment operator for addition
    // students++; // Using increment operator to increase the value of students by 1

    // students = students -1;
    // students -= 1; // Using compound assignment operator for subtraction
    // students--; // Using decrement operator to decrease the value of students by 1  

    // students = students * 2; // Using compound assignment operator for multiplication
    // students *= 2; // Using compound assignment operator for multiplication          
    
    // students = students / 2; // Using compound assignment operator for division
    // students /= 2; // Using compound assignment operator for division

    // students = students % 3; // Using compound assignment operator for modulus
    students %= 3; // Using compound assignment operator for modulus
    std::cout << students;
    return 0;
}