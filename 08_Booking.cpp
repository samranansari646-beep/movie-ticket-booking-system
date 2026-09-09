#include <iostream>
#include <string>
using namespace std;

class Booking {
private:
    int bookingId;
    int customerId;
    int showId;
    int seatNumber;

public:
    Booking(int bookingId, int customerId, int showId, int seatNumber) {
        this->bookingId = bookingId;
        this->customerId = customerId;
        this->showId = showId;
        this->seatNumber = seatNumber;
    }

    int getBookingId() const {
        return bookingId;
    }

    int getCustomerId() const {
        return customerId;
    }

    int getShowId() const {
        return showId;
    }

    int getSeatNumber() const {
        return seatNumber;
    }
};
