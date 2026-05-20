#include <iostream>

  /*
    Insert and extract operations in C++.
    The insertion operator (<<) is used to output data to the console.
    The extraction operator (>>) is used to input data from the console.
    */ 

int main(){
    
    std::string name; // Variable to store the user's name
    int age; // Variable to store the user's age

    std::cout << "Enter your age: "; // Insertion operator to output data to the console
    std::cin >> age; // Extraction operator to input data from the console

    std::cout << "Enter Your Name: "; // Insertion operator to output data to the console
    std::getline(std::cin >> std::ws, name); // Extraction operator to input data from the console, std::ws is used to consume any leading whitespace

    std::cout << "Hello, " << name << "!" << std::endl; // Insertion operator to output data to the console
    std::cout << "You are " << age << " years old." << std::endl; // Insertion operator to output data to the console
  return 0;
}