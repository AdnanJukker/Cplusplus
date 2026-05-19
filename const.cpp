#include <iostream>

int main(){
    const double PI = 3.14159; // Define a constant for the value of pi
    PI = 3.14; // This will cause a compile-time error because PI is a constant
    double radius = 10;
    double circumference = 2 * PI * radius;
    std::cout << "The circumference of a circle with radius " << radius << " is " << circumference << "cm"<<std::endl;
    return 0;   

}