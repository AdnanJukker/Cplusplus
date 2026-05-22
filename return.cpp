#include <iostream>
using namespace std;

// double square(double length);
// double cube(double length);
// int main()
// {
//     /*
//         return = returns a value back to the spot 
//                 where you called the encopassing function
            
//     */

//     double length = 5.0;
//     double area = square(length);
//     double volume = cube(length);

//     cout<<"area of square is: "<<area<<"cm^2\n";
//     cout<<"area of cube is: "<<volume<<"cm^3\n";

//     return 0;
// }

// double square(double length){
//     return length * length;
// }
// double cube(double length){
//     return length*length*length;
// }    



string concatStrings(string string1 ,string string2);
int main()
{
    string firstName = "Adnan";
    string lastName = "Jukkerwala";
    string fullname = concatStrings(firstName , lastName);

    cout<<"Your fullname is: "<<fullname<<'\n';
    
    return 0;
}

string concatStrings(string string1 ,string string2){
    return string1+" "+string2;
}   