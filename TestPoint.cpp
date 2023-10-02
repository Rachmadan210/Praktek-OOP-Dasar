#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
    double x;
    double y;

public:
    Point() : x(0), y(0) {} // Default constructor

    Point(double x, double y) : x(x), y(y) {} // Parameterized constructor

    void setX(double x) {
        this->x = x;
    }

    void setY(double y) {
        this->y = y;
    }

    void setXY(double x, double y) {
        this->x = x;
        this->y = y;
    }

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    double* getXY() {
        static double xy[2];
        xy[0] = x;
        xy[1] = y;
        return xy;
    }

    double distance(double x, double y) const {
        double dx = this->x - x;
        double dy = this->y - y;
        return sqrt(dx * dx + dy * dy);
    }

    double distance(const Point& other) const {
        return distance(other.x, other.y);
    }

    double distance() const {
        return sqrt(x * x + y * y);
    }

    friend ostream& operator<<(ostream& os, const Point& point) {
        os << "(" << point.x << "," << point.y << ")";
        return os;
    }
};

int main() {
    // Test constructors and toString()
    Point p1(1, 2);
    cout << p1 << endl;
    // (1,2)

    Point p2; // Default constructor
    cout << p2 << endl;
    // (0,0)

    // Test Setters and Getters
    p1.setX(3);
    p1.setY(4);
    cout << p1 << endl;
    // (3,4)
    cout << "X is: " << p1.getX() << endl;
    // X is: 3
    cout << "Y is: " << p1.getY() << endl;
    // Y is: 4

    // Test setXY() and getXY()
    p1.setXY(5, 6);
    cout << p1 << endl;
    // (5,6)
    cout << "X is: " << p1.getXY()[0] << endl;
    // X is: 5
    cout << "Y is: " << p1.getXY()[1] << endl;
    // Y is: 6

    // Test the 3 overloaded versions of distance()
    Point p3(10, 11);
    cout << "Distance is: " << p1.distance(10, 11) << endl;
    // Distance is: 7.07107
    cout << "Distance is: " << p1.distance(p3) << endl;
    // Distance is: 7.07107
    cout << "Distance is: " << p3.distance(p1) << endl;
    // Distance is: 7.07107
    cout << "Distance is: " << p1.distance() << endl;
    // Distance is: 7.81025

    return 0;
}
