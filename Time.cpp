#include <iostream>
#include <iomanip>
using namespace std;

class Time {
private:
    int second, minute, hour;

public:
    Time(int second, int minute, int hour) : second(second), minute(minute), hour(hour) {}

    Time() : second(0), minute(0), hour(0) {}

    int getSecond() const {
        return second;
    }

    int getMinute() const {
        return minute;
    }

    int getHour() const {
        return hour;
    }

    void setSecond(int second) {
        this->second = second;
    }

    void setMinute(int minute) {
        this->minute = minute;
    }

    void setHour(int hour) {
        this->hour = hour;
    }

    string toString() const {
        return to_string(hour) + ":" + to_string(minute) + ":" + to_string(second);
    }

    void setTime(int second, int minute, int hour) {
        this->second = second;
        this->minute = minute;
        this->hour = hour;
    }

    Time& nextSecond() {
        ++second;
        if (second >= 60) {
            second = 0;
            ++minute;
            if (minute >= 60) {
                minute = 0;
                ++hour;
                if (hour >= 24) {
                    hour = 0;
                }
            }
        }
        return *this;
    }
};