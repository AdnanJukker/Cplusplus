#include <iostream>
using namespace std;


void carRepair();
void carRepair(string car1);
void carRepair(string car1, string car2);
int main(){
    carRepair("oil Replace", "tyre change");
    return 0;
}

void carRepair(){
    cout<<"your car is repaired\n";
}

void carRepair(string car1){
    cout<<"your car needed a: "<< car1 <<'\n';
}

void carRepair(string car1, string car2){
    cout<<"your car needed a: "<< car1 <<" and "<< car2 <<'\n';
}