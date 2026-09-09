#include <iostream>
using namespace std;

#include "01_Movie.cpp"
#include "02_Seat.cpp"
#include "03_Screen.cpp"
#include "04_Cinema.cpp"
#include "05_Show.cpp"
#include "06_ShowSeat.cpp"
#include "07_Customer.cpp"
#include "08_Booking.cpp"
#include "09_Payment.cpp"
#include "10_PaymentTypes.cpp"
#include "11_PriceCalculator.cpp"
#include "12_TicketPrinter.cpp"
#include "13_BookingService.cpp"

int main() {

    Movie movie("Avengers", "English", 180);
    Cinema cinema("PVR Cinema", "Delhi");
    Screen screen(1, 100);
    Seat seat(10);
    Show show(101, "6:00 PM", 1);
    Customer customer(1, "Aditi", "9876543210");

    PriceCalculator calculator;
    double price = calculator.calculatePrice(1, 250);

    Booking booking(1001, 1, 101, 10);

    BookingService service;
    service.bookTicket(1001, 10);

    TicketPrinter printer;
    printer.printTicket(1001, 10, price);

    cout << endl;
    cout << "Movie: " << movie.getTitle() << endl;
    cout << "Cinema: " << cinema.getName() << endl;
    cout << "Customer: " << customer.getName() << endl;

    return 0;
}
