#include <iostream>
#include <iomanip>
using namespace std;

class Date {
private:
    int year;
    int month;
    int day;

public:
    // Constructors
    Date(int y, int m, int d) : year(y), month(m), day(d) {}

    // Setters
    void setYear(int y) {
        year = y;
    }

    void setMonth(int m) {
        month = m;
    }

    void setDay(int d) {
        day = d;
    }

    // Getters
    int getYear() const {
        return year;
    }

    int getMonth() const {
        return month;
    }

    int getDay() const {
        return day;
    }

    // Method to set the date
    void setDate(int y, int m, int d) {
        year = y;
        month = m;
        day = d;
    }

    // Method to display the date
    void displayDate() const {
        cout << setfill('0') << setw(2) << month << "/"
                  << setw(2) << day << "/" << year << endl;
    }
};

int main() {
    // Test constructor and displayDate()
    Date d1(2020, 2, 8);
    d1.displayDate();  // displayDate()
    
    // Test Setters and Getters
    d1.setYear(2012);
    d1.setMonth(12);
    d1.setDay(23);
    d1.displayDate();
    cout << "Year is: " << d1.getYear() << endl;
    cout << "Month is: " << d1.getMonth() << endl;
    cout << "Day is: " << d1.getDay() << endl;

    // Test setDate()
    d1.setDate(2988, 1, 2);
    d1.displayDate();

    return 0;
}