#include <iostream>
using namespace std;

class PriceCalculator {
public:
    double calculatePrice(int numberOfSeats, double pricePerSeat) {
        return numberOfSeats * pricePerSeat;
    }
};
