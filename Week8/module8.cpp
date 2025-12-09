#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount() {
        balance = 0.0;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: $" << amount << endl;
        saveTransaction("Deposit", amount);
    }

    void makePurchase(string item, double cost) {
        if (cost > balance) {
            cout << "Insufficient funds for " << item << endl;
        } else {
            balance -= cost;
            cout << "Purchased " << item << " for $" << cost << endl;
            saveTransaction("Purchase - " + item, cost);
        }
    }

    void printBalance() {
        cout << "Current Balance: $" << balance << endl;
    }

    void saveTransaction(string type, double amount) {
        ofstream file("transactions.txt", ios::app);
        if (file.is_open()) {
            file << type << ": $" << amount << endl;
            file.close();
        }
    }
};

int main() {
    BankAccount myAccount;
   myAccount.deposit(10); // initial balance

cout << "Added starting balance of $10" << endl;

int choice;
bool running = true;

while (running) {

        cout << "\n===== BANK MENU =====" << endl;
        cout << "1. Deposit Funds" << endl;
        cout << "2. Make a Purchase" << endl;
        cout << "3. View Balance" << endl;
        cout << "4. Exit Program" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            double amount;
            cout << "Enter amount to deposit: ";
            cin >> amount;
            myAccount.deposit(amount);
        }

        else if (choice == 2) {
            string item;
            double cost;

            cout << "Enter item name: ";
            cin >> item;

            cout << "Enter cost: ";
            cin >> cost;

            myAccount.makePurchase(item, cost);
        }

        else if (choice == 3) {
            myAccount.printBalance();
        }

        else if (choice == 4) {
            myAccount.printBalance();
            cout << "Exiting program..." << endl;
            running = false;
        }

        else {
            cout << "Invalid choice. Try again." << endl;
        }
    }

    return 0;
}
