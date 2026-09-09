#include <iostream>
#include <string>
using namespace std;

class Seat {
private:
    int seatNumber;
    bool booked;

public:
    Seat(int seatNumber) {
        this->seatNumber = seatNumber;
        booked = false;
    }

    int getSeatNumber() const {
        return seatNumber;
    }

    bool isBooked() const {
        return booked;
    }

    void book() {
        booked = true;
    }

    void cancel() {
        booked = false;
    }
};
