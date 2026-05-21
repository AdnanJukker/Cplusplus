#include <iostream>

int main()
{
    /*
        loop(){
            loop(){
            
            }
        
        }
    */

    int rows;
    int columns;
    char symbols;

    std::cout<<"Enter the rows: ";
    std::cin>>rows;
    std::cout<<"Enter the columns: ";
    std::cin>>columns;
    std::cout<<"Enter the Symbol: ";
    std::cin>>symbols;

    for (int i = 1; i <=rows ; i++){
        for(int j=1;j<=columns;j++)
            {
             std::cout<< symbols;
            }
            std::cout << '\n';
        }
    return 0;
}