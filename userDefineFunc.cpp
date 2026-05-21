#include <iostream>
using namespace std;

//function = block of reusable code


void happyBirthday(string name, int age){

    cout<<"Happy birthday to "<<name<<"\n";
    cout<<"Happy birthday to "<<name<<"\n";
    cout<<"Happy birthday dear "<<name<<"\n";
    cout<<"Happy birthday to "<<name<<"\n";
    cout <<"You are "<< age << " years old! \n";
}

int main(){

    string name = "Adnan";
    int age = 24;

    happyBirthday(name, age);  

    return 0;
}