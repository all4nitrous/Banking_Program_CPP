#include <iostream>
#include <iomanip> // Working with float

/* Namespaces */
using std::cout;
using std:: endl;
using std::cin;
using std::string;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() 
{

    double balance = 0;
    int choice = 0;

    do {

        cout << "*******************" << endl;
        cout << "Enter your choice: " << endl;
        cout << "*******************" << endl;
        cout << "1. Show Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;

        std::cin.clear();
        fflush(stdin); // Helps clear the buffer if someone types incorrect input

        switch(choice)
        {

            case 1: showBalance(balance);
                    break;
            case 2: balance = balance += deposit();
                    showBalance(balance);
                    break;
            case 3: balance -= withdraw(balance);
                    showBalance(balance);
                    break;
            case 4: cout << "Thanks for visiting!" << endl;
                    break;
            default: cout << "Invalid Choice" << endl;



        }


    } while(choice != 4);

    



    return 0;

}

void showBalance(double balance) 
{
    cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << endl; // Using iomanip function to create two decimal places
}
double deposit() 
{

    double amount = 0;
    cout << "Enter amount to be deposited : " << endl;
    cin >> amount;

    if(amount > 0) {

        return amount;
    }
    else {
        cout << "That's not a valid amount: " << endl;
        return 0;
    }

    return amount;
}
double withdraw(double balance) 
{

    double amount = 0;

    cout << "Enter amount to be withdrawn: " << endl;
    cin >> amount;

    if(amount > balance) {
        cout << "insufficient funds" << endl;
        return 0;

    } else if(amount < 0) {
        cout << "That's not a valid amount" << endl;
        return 0;
    } else {
        return amount;
    }
    
}