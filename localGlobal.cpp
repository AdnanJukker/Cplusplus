#include <iostream>
using namespace std;

int myNum = 3;

void printNum();

int main(){
    // local variable = declared inside the block or function {}
    // global variable = declared outside all the function
    int myNum = 1;
    cout<<myNum<<'\n';// prints local variable
    printNum(); // prints local variable of its functions
    cout<<::myNum<<'\n';//prints global variable using scope"::"
    return 0;
}

void printNum(){
    int myNum = 2;
    cout<<myNum<<'\n';
}