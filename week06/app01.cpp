// stack memory : parameters, local variables
// static(data) memory : global object, static object
// heap memory : dynamic memory allocation (allocate at running time)

#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;
    static int count;  // static object

public:
    // constructor
    Circle() {
        cout << this << "원 객체 생성 (기본 생성자)\n";
        count++;
    }
    Circle(double r) {
        cout << this << "원 객체 생성 (매개변수 생성자)\n";
        radius = r;
        count++;
    }
    Circle(const Circle& c) {
        cout << this << "원 객체 생성 (복사 생성자)\n";
        radius = c.radius;
        count++;
    }
    // destructor
    ~Circle() {
        cout << this << "원 객체 소멸\n";
        count--;
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

    static int getCount();
};

int Circle::count = 0;

int Circle::getCount() {
    return count;
}

inline void Circle::setRadius(double value)
{
    radius = value;
}

Circle circle5;  // global object

void test() {
    Circle circle6(2.0);
    Circle* circle7 = new Circle(circle6);  // allocate heap memory

    cout << Circle::getCount() << "개\n";

    cout << circle6.getRadius() << '\n';
    //cout << circle7.getRadius() << '\n';  // error. circle7은 객체가 아닌 지역 포인터 변수
    cout << (*circle7).getRadius() << '\n';
    cout << circle7->getRadius() << '\n';

    delete circle7; // free heap memory
    cout << Circle::getCount() << "개\n";
}

int main()
{
    cout << Circle::getCount() << "개\n";

    Circle circle1;
    circle1.setRadius(10.0);
    cout << "Radius: " << circle1.getRadius() << endl;
    cout << "Area: " << circle1.getArea() << endl;
    cout << "Perimeter: " << circle1.getPerimeter() << endl << endl;

    cout << Circle::getCount() << "개\n";

    test();

    cout << Circle::getCount() << "개\n";

    Circle circle2;
    circle2.setRadius(20.0);
    cout << "Radius: " << circle2.getRadius() << endl;
    cout << "Area: " << circle2.getArea() << endl;
    cout << "Perimeter: " << circle2.getPerimeter() << endl << endl;

    Circle circle3(5.0);

    Circle circle4(circle2);
    cout << "Radius: " << circle4.getRadius() << endl;

    cout << Circle::getCount() << "개\n";
    //cout << circle4.getCount() << "개\n";
    //cout << circle6.getCount() << "개\n";
    return 0;
}