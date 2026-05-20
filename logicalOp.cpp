#include <iostream>

int main(){

    /*
    && = checks if two conditions are true 
    || = checks if one condition is true 
    ! =  reverses the logical state of its operand
    */
    int temp;
    bool sunny = true;

    std::cout<<"Enter the temp: ";
    std::cin >> temp;

    // if (temp >=0 && temp <=30){
    //     std::cout<<"temp is good!\n";
    // }
    // else {
    //     std::cout<<"temp is bad\n";
    // }

    if (temp <=0 || temp >=30){
        std::cout<<"temp is bad!\n";
    }
    else {
        std::cout<<"temp is good\n";
    }

    if(!sunny){
        std::cout<<"it is sunny outside\n";
    }
    else{
        std::cout<<"it is cold outside\n";
    }
    return 0;
}