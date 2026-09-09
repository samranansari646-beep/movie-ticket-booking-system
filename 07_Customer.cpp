#include <iostream>
#include <string>
using namespace std;

class Customer {
private:
    int customerId;
    string name;
    string phone;

public:
    Customer(int customerId, string name, string phone) {
        this->customerId = customerId;
        this->name = name;
        this->phone = phone;
    }

    int getCustomerId() const {
        return customerId;
    }

    string getName() const {
        return name;
    }

    string getPhone() const {
        return phone;
    }
};
