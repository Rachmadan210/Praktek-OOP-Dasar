#include <iostream>
using namespace std;

class Account {
private:
    int number;
    double balance;

public:
    Account(int number) {
        this->number = number;
        this->balance = 0.0;
    }

    Account(int number, double balance) {
        this->number = number;
        this->balance = balance;
    }

    int getNumber() {
        return number;
    }

    double getBalance() {
        return balance;
    }

    void credit(double amount) {
        balance += amount;
    }

    void debit(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient funds" << endl;
        }
    }

    void transferTo(double amount, Account& destination) {
        if (amount <= balance) {
            balance -= amount;
            destination.credit(amount);
        } else {
            cout << "Insufficient funds" << endl;
        }
    }

    friend ostream& operator<<(ostream& os, const Account& account) {
        os << "Account Number: " << account.number << ", Balance: " << account.balance;
        return os;
    }
};

int main() {
    Account a1(5566);
    cout << a1 << endl;

    Account a2(1234, 99.9);
    cout << a2 << endl;

    cout << "The account Number is: " << a2.getNumber() << endl;

    cout << "The balance is: " << a2.getBalance() << endl;

    a1.credit(11.1);
    cout << a1 << endl;

    a1.debit(5.5);
    cout << a1 << endl;

    a1.debit(500);

    cout << a1 << endl;

    a2.transferTo(1.0, a1);
    cout << a1 << endl;

    cout << a2 << endl;

    return 0;
}