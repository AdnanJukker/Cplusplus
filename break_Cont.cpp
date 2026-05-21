#include <iostream>

// break = break out of the loop 
// continue = skip current iteration
int main()
{
    for (int i = 1; i<=20;i++)
    {
        if(i ==13){
            // break;//the output will 1-12
            continue; // the output will be 1 - 20 where 13 will be skipped 
        }
        std::cout << i <<'\n';
    }
    return 0;
}