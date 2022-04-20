#include <iostream>
using namespace std;

class Rectangle
{

private:
    int length;
    int breadth;
    float bread;

public:
    Rectangle() { length = breadth = 1; }
    Rectangle(int l, int b) : length(l), breadth(b) {}
    Rectangle(int l, float b) : length(l), bread(b) {}

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length * breadth);
    }
    ~Rectangle()
    {
        cout << "Destructor called";
    }
};

int main(int argc, char const *argv[])
{

    Rectangle r(3, 5);
    cout << r.area() << endl;
    cout << r.perimeter() << endl;

    Rectangle r1(3, 5.5);
    cout << r1.area() << endl;
    cout << r1.perimeter() << endl;

    return 0;
}
