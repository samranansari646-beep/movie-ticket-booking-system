#include <iostream>
using namespace std;

class ShowSeat {
private:
    int seatNumber;
    bool booked;

public:
    ShowSeat(int seatNumber) {
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
