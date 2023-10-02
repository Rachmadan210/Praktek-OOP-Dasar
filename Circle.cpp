#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
    double radius;
    string color;

public:
    // Constructors (overloaded)
    Circle() : radius(1.0), color("red") {} // 1st Constructor (default constructor)

    Circle(double r) : radius(r), color("red") {} // 2nd Constructor

    Circle(double r, string c) : radius(r), color(c) {} // 3rd Constructor

    // Public methods
    double getRadius() const { // getter for radius
        return radius;
    }

    string getColor() const { // getter for color
        return color;
    }

    double getArea() const {
        return radius * radius * M_PI;
    }
};