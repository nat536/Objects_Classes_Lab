#include <iostream>
#include <vector>
using namespace std;

class BankAccount {
    private:
        string accountNumber;
        string accountHolderName;
        double balance;
    public:
        BankAccount();
        BankAccount(string number, string name, double accountBalance);
        void setAccountHolderName(string name);
        string getAccountNumber();
        string getAccountHolderName();
        double getBalance();
        void deposit(double amount);
        void withdraw(double amount);
};//end BankAccount class

BankAccount::BankAccount() {
    accountNumber = "no_account_number";
    accountHolderName = "no_account_holder_name";
    balance = 0.0;
}//end BankAccount default constructor

BankAccount::BankAccount(string number, string name, double accountBalance) {
    accountNumber = number;
    accountHolderName = name;
    balance = accountBalance;
}//end BankAccount constructor w/ parameters

void BankAccount::setAccountHolderName(string name) { accountHolderName = name; }

string BankAccount::getAccountNumber() { return accountNumber; }

string BankAccount::getAccountHolderName() { return accountHolderName; }

double BankAccount::getBalance() { return balance; }

void BankAccount::deposit(double amount) { balance += amount; }

void BankAccount::withdraw(double amount) { balance -= amount; }

int displayMenu() {
    cout << "Menu:\n1. Open an Account\n2. Change Account Name\n3. Deposit\n4. Withdraw\n5. Quit" << endl;
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    return choice;
}//end displayMenu()

void runMenu() {
    int choice;
    string customerNumber;
    string customerName;
    double customerBalance;
    BankAccount account;

    do {
        choice = displayMenu();
        switch (choice) {
            case 1: {
                cout << "Enter account number (must be 6 numbers long): ";
                cin >> customerNumber;
                cout << "\nEnter account name: ";
                cin >> customerName;
                cout << "\nHow much would you like to deposit?: ";
                cin >> customerBalance;
                BankAccount account(customerNumber, customerName, customerBalance);
                break;
            }//end case 1

            case 2: {
                cout << "Enter new account holder name: ";
                cin >> customerName;
                account.setAccountHolderName(customerName);
                break;
            }//end case 2

            case 3: {
                double depositAmount;
                cout << "How much would you like to deposit?: ";
                cin >> depositAmount;
                account.deposit(depositAmount);
                break;
            }//end case 3

            case 4: {
                double withdrawAmount;
                cout << "How much would you like to withdraw?: ";
                cin >> withdrawAmount;
                account.withdraw(withdrawAmount);
                break;
            }//end case 4

        }//end switch
    }//end do
    while (choice != 5);
}//end runMenu()

int main() {
    runMenu();
    return 0;
}//end main()