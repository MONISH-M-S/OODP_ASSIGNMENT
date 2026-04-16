#include <iostream>
using namespace std;

class Account
{
private:
    int accNumber;
    string holderName;
    double balance;

    static int totalAccounts; 

public:
   
    Account(int accNo, string name, double bal)
    {
        accNumber = accNo;
        holderName = name;
        balance = bal;

        totalAccounts++; 
    }

   
    void display()
    {
        cout << "Account Number: " << accNumber << endl;
        cout << "Account Holder: " << holderName << endl;
        cout << "Balance: " << balance << endl;
        cout << "-------------------------" << endl;
    }

    
    static void showTotalAccounts()
    {
        cout << "Total Accounts Created: " << totalAccounts << endl;
    }
};


int Account::totalAccounts = 0;


int main()
{
    Account a1(101, "Monish", 5000);
    Account a2(102, "Rahul", 7000);
    Account a3(103, "Priya", 9000);

    a1.display();
    a2.display();
    a3.display();

    
    Account::showTotalAccounts();

    return 0;
}