#include <iostream>
using namespace std;

class TicketPrinter {
public:
    void printTicket(int bookingId, int seatNumber, double price) {
        cout << "----- MOVIE TICKET -----" << endl;
        cout << "Booking ID: " << bookingId << endl;
        cout << "Seat Number: " << seatNumber << endl;
        cout << "Price: " << price << endl;
        cout << "------------------------" << endl;
    }
};
