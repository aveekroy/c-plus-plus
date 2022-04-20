#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

struct Experiment
{
    int arr[5];
    int size;
};

// Pass by Value
void structPassByValue(Rectangle r)
{
    r.length = 20;
    cout << "Length: " << r.length << endl;
    cout << "Breadth: " << r.breadth << endl;
}
// Pass by Address
void structPassByAddress(Rectangle *p)
{
    p->length = 20; // or '(*p).length = 20;'
    cout << "Length: " << p->length << endl;
    cout << "Breadth: " << p->breadth << endl;
}
// Returning a pointer to a structure Rectangle
Rectangle *func()
{
    Rectangle *p = new Rectangle; // gets created in heap of the memory
    p->length = 40;
    p->breadth = 40;
    return p;
}

// Array inside a structure - copy by value is permitted now, only when it is declared inside a structure
void fun(Experiment exp)
{
    exp.arr[0] = 20;
    cout << "Inside Fun - Array: " << exp.arr[0] << endl;
    cout << "Inside Fun - Size: " << exp.size << endl;
}

int main()
{
    cout << "\n\tStructure - Pass by Value\n"
         << endl;
    Rectangle r1 = {10, 5};
    structPassByValue(r1);
    cout << "Main - Length: " << r1.length << endl;
    cout << "Main - Breadth: " << r1.breadth << endl;
    cout << "\n\tStructure - Pass by Address\n"
         << endl;
    Rectangle r2 = {10, 5};
    structPassByAddress(&r2);
    cout << "Main - Length: " << r2.length << endl;
    cout << "Main - Breadth: " << r2.breadth << endl;
    cout << "\n\tStructure - Returning a pointer to a structure Rectangle\n"
         << endl;
    Rectangle *ptr = func();
    cout << "Main - Length: " << ptr->length << endl;
    cout << "Main - Breadth: " << ptr->breadth << endl;
    cout << "\n\tStructure - Array inside a structure\n"
         << endl;
    Experiment e = {{2, 4, 6, 8, 10}, 5};
    fun(e);
    cout << "Main - Array: " << e.arr[0] << endl;
    cout << "Main - Size: " << e.size << endl;
}