#include <iostream>

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

        switch(choice)
        {

            case 1: showBalance(balance);
                    break;
            case 2: balance = balance += deposit();
                    break;
            case 3: balance -= withdraw(balance);
                    break;
            case 4: cout << "Thanks for visiting!" << endl;
                    break;
            default: cout << "Invalid Choice" << endl;



        }


    } while(choice != 4);

    



    return 0;

}