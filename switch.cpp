#include <iostream>
/*
switch = alterantive to using many "else if " statements 
compare one value against matching cases 
*/

int main(){

    int month;
    std::cout<<"enter the month(1-12): ";
    std::cin >> month;
    
    switch (month)
    {
        case 1:
            std::cout<<"its January"<<'\n';
            break;
        case 2:
            std::cout<<"its Febuary"<<'\n';
            break;
        case 3:
            std::cout<<"its March"<<'\n';
            break;
        case 4:
            std::cout<<"its April"<<'\n';
            break;
        case 5:
            std::cout<<"its May"<<'\n';
            break;
        case 6:
            std::cout<<"its June"<<'\n';
            break;
        case 7:
            std::cout<<"its July"<<'\n';
            break;
        case 8:
            std::cout<<"its August"<<'\n';
            break;
        case 9:
            std::cout<<"its September"<<'\n';
            break;
        case 10:
            std::cout<<"its October"<<'\n';
            break;
        case 11:
            std::cout<<"its November"<<'\n';
            break;
        case 12:
            std::cout<<"its December"<<'\n';
            break;                                        
    default:
        std::cout<<"Please enter the number between 1 to 12 ONLY!"<<'\n';
        break;
    }

    char grade;
    std::cout<<"enter your grade: ";
    std::cin>>grade;

    switch(grade){
        case 'A':
            std::cout<<"You did great"<<'\n';
            break;
        case 'B':
            std::cout<<"You are good"<<'\n';
            break;
        case 'C':
            std::cout<<"You can you do better"<<'\n';
            break;
        case 'D':
            std::cout<<"You need Help!"<<'\n';
            break;
        case 'F':
            std::cout<<"You Failed!"<<'\n';
            break;
        default:
            std::cout<<"Please Enter only grade(A-F)"<<'\n';
            break;    

    }

    return 0;
}