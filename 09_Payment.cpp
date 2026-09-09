#include <iostream>
using namespace std;

class Payment {
protected:
    double amount;

public:
    Payment(double amount) {
        this->amount = amount;
    }

    virtual void pay() {
        cout << "Payment of " << amount << " processed." << endl;
    }

    virtual ~Payment() {}
};
