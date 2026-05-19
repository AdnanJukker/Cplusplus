#include <iostream>
#include <vector>

// typedef std::string text_t;
// typedef int number_t;
using text_t = std::string; // Using using keyword to create an alias for std::string
using number_t = int; // Using using keyword to create an alias for int

int main(){

    /*
    typedef is used to create an alias for a data type, 
    making it easier to read and maintain code. 
    It allows you to define a new name for an existing type. 
    */
    /*
    using keyword is a more modern and preferred way to create type aliases in C++. 
    It provides a clearer syntax and is more versatile than typedef.
    */
   
    text_t name = "John Doe"; // Using typedef to create an alias for std::string
    number_t age = 30; // Using typedef to create an alias for std::int
    std::cout <<name <<"age is "<< age <<'\n';
    

    return 0; 
}