#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Circle {
private:
    double radius;
    string color;

public:
    // Constructors
    Circle(double r = 1.0, string c = "red") : radius(r), color(c) {}

    // Getter methods
    double getRadius() const {
        return radius;
    }

    string getColor() const {
        return color;
    }

    double getArea() const {
        return 3.14159 * radius * radius;
    }
};

int main() {
    // Declare and Construct an instance of the Circle class called c1
    Circle c1(2.0, "blue");
    cout << "The radius is: " << c1.getRadius() << endl;
    cout << "The color is: " << c1.getColor() << endl;
    cout << "The area is: " << fixed << setprecision(2) << c1.getArea() << endl;

    // Declare and Construct another instance of the Circle class called c2
    Circle c2(2.0);
    cout << "The radius is: " << c2.getRadius() << endl;
    cout << "The color is: " << c2.getColor() << endl;
    cout << "The area is: " << fixed << setprecision(2) << c2.getArea() << endl;

    // Declare and Construct yet another instance of the Circle class called c3
    Circle c3;
    cout << "The radius is: " << c3.getRadius() << endl;
    cout << "The color is: " << c3.getColor() << endl;
    cout << "The area is: " << fixed << setprecision(2) << c3.getArea() << endl;

    return 0;
}