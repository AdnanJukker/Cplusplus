#include <iostream>

/*
ternary operators ?: = replacement to an if/else statements 
condition ? expression 1: expression2;
*/ 
int main(){


    int grade = 70;
    grade >= 60 ? std::cout << "You Pass!"<<'\n': std::cout << "You Fail!"<<'\n';

    int number = 21;
    number % 2 == 1 ? std::cout<<"ODD"<<'\n' : std::cout <<"EVEN"<<'\n';

    bool hungry = false;
    std::cout<<(hungry ? "You are hungry" : "you are full")<<'\n';

    return 0;
}