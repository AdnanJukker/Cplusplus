#include <iostream>
#include <iomanip>
using namespace std;

void showBalance(double balance);
double deposite();
double withdraw(double balance);

int main(){

    double balance = 0;
    int choice = 0;
    do{
        cout << "********************\n";
        cout << "Enter your choice: \n";
        cout << "********************\n";
        cout << "1. Show Balance \n";
        cout << "2. Deposite money \n";
        cout << "3. Withdraw money \n";
        cout << "4. Exit\n";
        cin >> choice;

        cin.clear();
        fflush(stdin);

        switch (choice)
        {
        case 1: showBalance(balance);
                break;
        case 2: balance += deposite();
                showBalance(balance);
                break;
        case 3: balance -= withdraw(balance);
                showBalance(balance);
                break;
        case 4: cout << "Thank for visiting \n";
                break;
        default: cout << "invalid Choice\n";
                break;
        }
    }while(choice != 4);

    return 0;
}

void showBalance(double balance)
{
    cout << "Your balance is : $"<< setprecision(2) << fixed << balance<<'\n';
}
double deposite()
{
    double amount = 0;
    
    cout << "Enter the amount to be deposted: \n";
    cin >> amount;
    if (amount > 0){
        return amount;
    }
    else{
        cout << "Thats not a valid amount!";
        return 0;

    }
}
double withdraw(double balance)
{   
    double amount = 0;

    cout << "Enter the amount to be withdrawn: \n";
    cin >> amount;
    if (amount > balance)
    {
        cout <<"Insufficient funds\n";
        return 0;
    }
    else if (amount < 0)
    {
        cout << "its a invalid amount";
        return 0;
    }
    else{
        return amount;
    }
    
    return 0;

}