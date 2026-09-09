#include <iostream>
#include <string>
using namespace std;

class Cinema {
private:
    string name;
    string location;

public:
    Cinema(string name, string location) {
        this->name = name;
        this->location = location;
    }

    string getName() const {
        return name;
    }

    string getLocation() const {
        return location;
    }
};
