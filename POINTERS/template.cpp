#include <iostream>
using namespace std;

template <class T>
class Rectangle
{

private:
    T length;
    T breadth;

public:
    Rectangle() { length = breadth = 1; }
    Rectangle(T l, T b)
    {
        length = l;
        breadth = b;
    }

    T area()
    {
        return length * breadth;
    }

    T perimeter()
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

    Rectangle<int> r1(2, 3);
    Rectangle<float> r2(2.56, 3.54);
    cout << r1.area() << endl;
    cout << r1.perimeter() << endl;
    cout << r2.area() << endl;
    cout << r2.perimeter() << endl;

    return 0;
}
