#include <iostream>

using namespace std;

void swapByValue(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void swapByAddress(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void swapByReference(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{

    int a, b;
    a = 10;
    b = 20;

    swapByValue(a, b);
    cout << a << " " << b << endl;

    swapByAddress(&a, &b);
    cout << a << " " << b << endl;

    swapByReference(a, b);
    cout << a << " " << b << endl;
}