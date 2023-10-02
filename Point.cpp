#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point() : x(0), y(0) {} // Default constructor

    Point(int x, int y) : x(x), y(y) {} // Parameterized constructor

    int getX() const {
        return x;
    }

    void setX(int x) {
        this->x = x;
    }

    int getY() const {
        return y;
    }

    void setY(int y) {
        this->y = y;
    }

    string toString() const {
        return "(" + to_string(x) + "," + to_string(y) + ")";
    }

    int* getXY() {
        static int xy[2];
        xy[0] = x;
        xy[1] = y;
        return xy;
    }

    void setXY(int x, int y) {
        this->x = x;
        this->y = y;
    }

    double distance(int x, int y) const {
        int xDiff = this->x - x;
        int yDiff = this->y - y;
        return sqrt(xDiff * xDiff + yDiff * yDiff);
    }

    double distance(const Point& another) const {
        int xDiff = this->x - another.x;
        int yDiff = this->y - another.y;
        return sqrt(xDiff * xDiff + yDiff * yDiff);
    }

    double distance() const {
        return sqrt(x * x + y * y);
    }
};