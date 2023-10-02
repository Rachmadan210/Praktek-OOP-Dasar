#include <iostream>
#include <iomanip>
using namespace std;

class Account {
private:
    int number;
    double balance;

public:
    Account(int number) : number(number), balance(0.0) {}

    Account(int number, double balance) : number(number), balance(balance) {}

    int getNumber() const {
        return number;
    }

    double getBalance() const {
        return balance;
    }

    string toString() const {
        return "Account[number=" + to_string(number) + ",balance=$" + to_string(balance) + "]";
    }

    void credit(double amount) {
        balance += amount;
    }

    void debit(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            cout << "amount exceeded" << endl;
        }
    }

    void transferTo(double amount, Account& another) {
        if (balance >= amount) {
            balance -= amount;
            another.balance += amount;
        } else {
            cout << "amount exceeded" << endl;
        }
    }
};