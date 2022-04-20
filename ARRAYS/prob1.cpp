// Problem 1: Remove Even Integers from an Array
#include <iostream>
using namespace std;

int *removeEven(int Arr[], int size)
{
    int m = 0;
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] % 2 != 0) // if odd number found
        {
            Arr[m] = Arr[i]; //inserting odd values in array
            ++m;
        }
    }
    int *temp = new int[m];
    for (int i = 0; i < m; i++)
        temp[i] = Arr[i];

    delete[] Arr;
    Arr = temp;
    return Arr; // returning array after removing odd numbers
}

int main()
{
    int *arr;          // declaring array
    arr = new int[10]; // memory allocation
    cout << "Before remove even: ";
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i; // assigning values
        cout << arr[i] << " ";
    }
    cout << endl;
    arr = removeEven(arr, 10); // calling removeEven
    cout << "After remove even: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " "; // prinitng array
    }
    delete[] arr; // deleting allocated memory
    return 0;
}
