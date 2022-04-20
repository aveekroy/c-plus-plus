#include <iostream>
using namespace std;

// Passing an array as address by default -
// IMPORTANT: pass by value is not supported - but if the array is inside a structure, it is supported (see structures.cpp prgram)
void arrayByAddressOnly(int arr[] /* or '*arr' */, int n)
{
    // cout << "sizeof Inside arrayByAddressOnly -- " << sizeof(arr) / sizeof(int) << endl;

    cout << "for loop Inside arrayByAddressOnly" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;

    arr[0] = 15;
}

// Function returning an initialized dynamic array
int *fun(int size)
{
    int *p = new int[size]; // created in heap memory instead of stack
    for (int i = 0; i < size; i++)
        p[i] = i + 1;
    return p;
}

int main(int argc, char const *argv[])
{
    int A[] = {2, 4, 6, 8, 10};
    int n = 5;
    arrayByAddressOnly(A, n);
    // cout << "sizeof Inside main -- " << sizeof(A) / sizeof(int) << endl;

    cout << "for loop Inside main -- " << endl;
    for (int x : A)
        cout
            << " " << x << endl;
    ;

    // Function returning an array
    int *ptr, sz = 7;
    ptr = fun(sz);

    for (int i = 0; i < sz; i++)
        cout << ptr[i] << endl;

    delete[] ptr;

    return 0;
}
