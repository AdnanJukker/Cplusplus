#include <iostream>

/*
if else statement in C++
do something if condition is true ,if not ,do nothing
else do something if condition is false
*/

int main(){

    int age = 18;

    std::cout << "enter your age: ";
    std::cin >> age;

    if ( age >= 100){
        std::cout << "how are you still alive?" << '\n';
    }
    else if (age >=18){
        std::cout << "you are an adult"<< '\n';
    }
    else if (age <= 18 && age >=16){
        std::cout << "you are a teenager" << '\n';
    }
    else if(age < 0){
        std::cout << " You havent been born yet" << '\n';
    }
    else{
        std::cout << "you are a minor" << '\n';
    }

    return 0;
}