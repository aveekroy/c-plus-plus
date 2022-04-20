#include <iostream>
#include <string>
using namespace std;

class Collector
{
    // Data Members --------------------------------------------------------------
    int *list;
    int size;
    int capacity;
    // Data Members --------------------------------------------------------------

public:
    // Constructors Starts --------------------------------------------------------------
    Collector()
    {
        // We must define the default values for the data members
        list = nullptr;
        size = 0;
        capacity = 0;
    }

    // Parameterized and Member Initializer lists constructor
    Collector(int cap) : capacity(cap), size(0)
    {
        // The arguments are used as values
        list = new int[capacity];
    }

    // Constructors Ends ----------------------------------------------------------------

    // Member Functions Starts ----------------------------------------------------------------

    bool append(int v)
    {
        if (size < capacity)
        {
            list[size++] = v;
            return true;
        }
        return false;
    }

    // A simple print function
    void dump()
    {
        for (int i = 0; i < size; i++)
        {
            cout << list[i] << " ";
        }
        cout << endl;
    }

    // Member Functions Ends ----------------------------------------------------------------

    // Destructor Starts ----------------------------------------------------------------
    ~Collector()
    {
        cout << "Deleting the object " << endl;
        if (capacity > 0)
        {
            cout << "Inside Destructor condition";
            delete[] list;
        }
    }
    // Destructor Ends ----------------------------------------------------------------
};

int main()
{
    Collector c(10);
    for (int i = 0; i < 15; i++)
    {
        cout << c.append(i) << endl;
    }
}
