#include <iostream>

namespace first{
    int x =20; // global variable
}
namespace second{
    int   x =30; // global variable
}

int main(){
    /* 
        namespace is a feature in C++ that allows 
        you to group related code together and avoid name conflicts. 
    It provides a way to organize code and prevent naming collisions 
    between different libraries or parts of a program.
    A namespace is defined using the keyword "namespace" 
    followed by a name and a block of code enclosed in curly braces. 
    Inside the namespace block, you can declare variables, functions, classes, 
    and other entities. To access the members of a namespace, you can use the scope
     resolution operator "::" followed by the namespace name and the member name.
    */

    using namespace first; // using directive to access members of the first namespace
    using  std::cout;
    using  std::string;
    
    string name = "Alice"; // using directive to access members of the std namespace

    cout << "Name: " << name << std::endl;
    cout << "Value of x: " << x << std::endl;
    cout << "Value of x: " << first::x << std::endl; 
    cout << "Value of x: " << second::x << std::endl; 

    return 0;
}