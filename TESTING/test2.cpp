#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int size;

    cout << "Enter Size:";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = i;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}

// this way of creating array will be created in stack. it is called as Variable Length Array.
// it is not a dynamic array. it has limitations.
// it cannot be initialised. foreach loop doesn't work on it. sometimes sizeof will not work.