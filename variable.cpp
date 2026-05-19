#include <iostream>

int main(){
    
    int x, y, sum; // declaration of variables x, y, and sum of type int (integer)
    x = 10; // assignment of value 10 to variable x
    y = 20;
    sum = x + y; // calculation of the sum of x and y and assignment of the result to variable sum


    std::cout << "the value of x is: "<< x << std::endl;
    std::cout << "the value of y is: "<< y << std::endl;
    std::cout << "the sum of x and y is: "<< sum << std::endl;

    // integer whole numbers
    int age = 25; // declaration and initialization of variable age of type int
    int year = 2026;
    int days  = 7.5; // declaration and initialization of variable days of type int (this will cause a warning because 7.5 is a floating-point number, not an integer)

    std::cout << days<<'\n';

    //double (number with decimal point)
    double price = 10.99;
    double cgpa = 7.5;
    double temperature = 36.6;

    std::cout<< price<<'\n';

    //char (single character)
    char grade = 'A';
    char initial = 'J';
    char number = '5'; // this is a character, not an integer
    std::cout << initial <<'\n';
    std::cout << number <<'\n';

    //bool (boolean value)
    bool isRaining = true;
    bool isSunny = false;
    std::cout<< isRaining <<'\n';

    //string (sequence of characters)
    std::string name = "John Doe";
    std::string day = "tuesday";
    std::string city = "Udaipur";

    std::cout<<name<<'\n'<<day<<'\n'<<city<<'\n';
    std::cout<<"Hello "<<name<<'\n';
    return 0;
}