#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int year, month, day;

public:
    Date(int year, int month, int day) : year(year), month(month), day(day) {}

    int getYear() const {
        return year;
    }

    int getMonth() const {
        return month;
    }

    int getDay() const {
        return day;
    }

    void setYear(int year) {
        this->year = year;
    }

    void setMonth(int month) {
        this->month = month;
    }

    void setDay(int day) {
        this->day = day;
    }

    string toString() const {
        return to_string(month) + "/" + to_string(day) + "/" + to_string(year);
    }

    void setDate(int year, int month, int day) {
        this->year = year;
        this->month = month;
        this->day = day;
    }
};