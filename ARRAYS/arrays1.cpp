#include <iostream>
using namespace std;

int main()
{
    int size = 10;

    //Dynamic array initialization
    int *dynamicArray = new int[size];
    for (int i = 0; i < size; i++)
    {
        dynamicArray[i] = i;
    }

    //Static array initialization
    int staticArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float staticArray2[] = {2.3, 7.9, 5.6, 4.2, 9.1};

    //Printing an static Array
    cout << "Static Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << staticArray[i] << " ";
    }
    cout << endl;

    //Printing an static Array
    cout << "Static Array 2:  ";
    for (int i = 0; i < 5; i++)
    {
        cout << staticArray2[i] << "  ";
    }
    cout << endl;

    //Printing an Dynamic Array
    cout << "Dynamic Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << dynamicArray[i] << " ";
    }

    // deleting allocated memory
    delete[] dynamicArray;
}
