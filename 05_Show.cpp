#include <iostream>
#include <string>
using namespace std;

class Show {
private:
    int showId;
    string time;
    int screenNumber;

public:
    Show(int showId, string time, int screenNumber) {
        this->showId = showId;
        this->time = time;
        this->screenNumber = screenNumber;
    }

    int getShowId() const {
        return showId;
    }

    string getTime() const {
        return time;
    }

    int getScreenNumber() const {
        return screenNumber;
    }
};
