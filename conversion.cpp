#include <iostream>

int main(){

    /*
    Type conversion in C++ can be either implicit or explicit.
    Implicit conversion is performed automatically by the compiler.
    Explicit conversion is performed by the programmer using type casting.
    */
    int x = 3.14; // Implicit conversion from double to int
    std::cout << "Implicit conversion: " << x << std::endl;
    double y= (int)3.14; // Explicit conversion from double to int
    std::cout << "Explicit conversion: " << y << std::endl; 
    
    char c = 100; // Implicit conversion from int to char
    std::cout << "implicit conversion: " << c << std::endl;
    std::cout << "Explicit conversion: " << (char)c << std::endl; // Explicit conversion from char to int
    
    int correct = 8;
    int questions = 10;
    double percentage = (double)correct / questions * 100;
    std::cout << percentage << "%"<<std::endl;

    return 0;
}