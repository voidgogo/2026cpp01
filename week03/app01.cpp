#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;
public:
    // constructor
    Circle() {
        cout << this << "원 객체 생성 (기본 생성자)\n";
    }
    Circle(double r) {
        cout << this << "원 객체 생성 (매개변수 생성자)\n";
        radius = r;
    }
    Circle(const Circle& c) {
        cout << this << "원 객체 생성 (복사 생성자)\n";
        radius = c.radius;
    }

    ~Circle() {
        cout << this << "원 객체 소멸\n";
    }
    // inline member function
    double getRadius() const {
        return radius;
    }
    double getArea() const {
        const double PI = 3.14;
        return (PI * radius * radius);
    }
    double getPerimeter() const {
        const double PI = 3.14;
        return (2 * PI * radius);
    }
    void setRadius(double value);  // inline O
};

inline void Circle::setRadius(double value)
{
    radius = value;
}

Circle circle5;

void test() {
    Circle circle6(2.0);
}

int main()
{
    Circle circle1;
    circle1.setRadius(10.0);
    cout << "Radius: " << circle1.getRadius() << endl;
    cout << "Area: " << circle1.getArea() << endl;
    cout << "Perimeter: " << circle1.getPerimeter() << endl << endl;

    test();

    Circle circle2;
    circle2.setRadius(20.0);
    cout << "Radius: " << circle2.getRadius() << endl;
    cout << "Area: " << circle2.getArea() << endl;
    cout << "Perimeter: " << circle2.getPerimeter() << endl << endl;

    Circle circle3(5.0);

    Circle circle4(circle2);
    cout << "Radius: " << circle4.getRadius() << endl;

    return 0;
}