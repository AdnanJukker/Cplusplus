#include <iostream>
#include <cmath> // Include the cmath library for mathematical functions

/*
  This program calculates the hypotenuse of a right triangle using the Pythagorean theorem.
  The Pythagorean theorem states that in a right triangle, the square of the length of the hypotenuse (the side opposite the right angle) is equal to the sum of the squares of the lengths of the other two sides.
  The formula is: c = sqrt(a^2 + b^2), where c is the length of the hypotenuse, and a and b are the lengths of the other two sides.
*/

int main(){
    double a;
    double b;
    double c;

    std::cout << "Enter side A: ";
    std::cin >> a;
    std::cout << "Enter side B: ";
    std::cin >> b;
    c = sqrt(pow(a, 2) + pow(b, 2)); // Calculate the hypotenuse using the Pythagorean theorem
    std::cout << "The length of the hypotenuse is: "<< c << '\n';

}