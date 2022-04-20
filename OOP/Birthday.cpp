#include <iostream>
#include "myClass.h"
using namespace std;

MyClass::MyClass()
{
    cout << "Constructor" << endl;
}

MyClass::~MyClass()
{
    cout << "Destructor" << endl;
}