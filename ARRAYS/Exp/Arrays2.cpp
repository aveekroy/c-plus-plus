#include <iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

void Display(Array arr)
{
    cout << "Elements are as follows: " << endl;

    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i];
    }
}

int main(int argc, char const *argv[])
{

    Array arr;
    int n, i;
    cout << "Enter size of an Array: " << endl;
    cin >> arr.size;

    arr.A = new int[arr.size];

    arr.length = 0;

    cout << "Enter the number of numbers:" << endl;
    cin >> n;

    cout << "Enter all elements" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr.A[i];
    }

    arr.length = n;

    Display(arr);

    return 0;
}
