#include <iostream>
#include <string>
using namespace std;

class Screen {
private:
    int screenNumber;
    int totalSeats;

public:
    Screen(int screenNumber, int totalSeats) {
        this->screenNumber = screenNumber;
        this->totalSeats = totalSeats;
    }

    int getScreenNumber() const {
        return screenNumber;
    }

    int getTotalSeats() const {
        return totalSeats;
    }
};
