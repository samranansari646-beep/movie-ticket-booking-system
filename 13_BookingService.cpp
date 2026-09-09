#include <iostream>
using namespace std;

class BookingService {
public:
    void bookTicket(int bookingId, int seatNumber) {
        cout << "Ticket booked successfully." << endl;
        cout << "Booking ID: " << bookingId << endl;
        cout << "Seat Number: " << seatNumber << endl;
    }

    void cancelTicket(int bookingId) {
        cout << "Booking " << bookingId << " cancelled." << endl;
    }
};
