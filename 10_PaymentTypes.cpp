#include <iostream>
using namespace std;

class CardPayment {
public:
    void pay(double amount) {
        cout << "Card payment: " << amount << endl;
    }
};

class UpiPayment {
public:
    void pay(double amount) {
        cout << "UPI payment: " << amount << endl;
    }
};

class CashPayment {
public:
    void pay(double amount) {
        cout << "Cash payment: " << amount << endl;
    }
};
