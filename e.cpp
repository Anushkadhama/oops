#include <iostream>
using namespace std;
class Circle {
private:
    double radius;
public:
    Circle(double r) {
        radius = r; }
    double calculateArea() {
        return 3.14 * radius * radius;
    }
    double calculateCircumference() {
        return 2 * 3.14 * radius;
    }
};

int main() {
    double r;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    Circle myCircle(r);
    double area = myCircle.calculateArea();
    double circumference = myCircle.calculateCircumference();
    cout << "Area of the circle: " << area << endl;
    cout << "Circumference of the circle: " << circumference << endl;