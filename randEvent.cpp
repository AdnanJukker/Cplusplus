#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch (randNum)
    {
    case 1:
        std::cout << "You win a sticker!\n";
        break;
    case 2:
        std::cout << "You win a discount vouchers!\n";
        break;
    case 3:
        std::cout << "You win a Speaker!\n";
        break;
    case 4:
        std::cout << "You win a TV!\n";
        break;
    case 5:
        std::cout << "You win a Vaction to Thailand!\n";
        break;
    }

    return 0;
}