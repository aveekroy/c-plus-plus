#include <iostream>
using namespace std;
// Pass by Value
void pvmultiply10(int num)
{
    num = num * 10;
    cout << "Inside pvmultiply10 - result is: " << num << endl;
}
//Pass by reference
void prmultiply10(int &num)
{
    num = num * 10;
    cout << "Inside prmultiply10 - result is: " << num << endl;
}
//Array - Pass by reference - default
void update(int arr[])
{
    arr[0] = 3;
    arr[1] = 4;
    cout << "Inside update - result is: " << arr[0] << " and " << arr[1] << endl;
}
// Pointers
void pointerMultiply10(int *num)
{
    *num = *num * 10;
    cout << "Inside pointerMultiply10 - result is: " << *num << endl;
}
// References
void referenceMultiply10(int& num)
{
    num = num * 10;
    cout << "Inside referenceMultiply10 - result is: " << num << endl;
}

int main()
{
    int number = 10;

    cout << "Before pvmultiply10 call - pass by value: " << number << endl;
    pvmultiply10(number);
    cout << "After pvmultiply10 call - pass by value: " << number << endl;
    cout << endl;

    cout << "Before prmultiply10 call - pass by reference: " << number << endl;
    prmultiply10(number);
    cout << "After prmultiply10 call - pass by reference: " << number << endl;
    cout << endl;

    int array[2] = {1, 2};
    cout << "Before update call - array - default is pass by reference: " << array[0] << " and " << array[1] << endl;
    update(array);
    cout << "After update call - array - default is pass by reference: " << array[0] << " and " << array[1] << endl;
    cout << endl;

    cout << "Before pointerMultiply10 call - pointer - pass by reference: " << number << endl;
    pointerMultiply10(&number);
    cout << "After pointerMultiply10 call - pointer - pass by reference: " << number << endl;
    cout << endl;

    int iRefNum = number;
    cout << "Before referenceMultiply10 call - references - pass by reference: " << iRefNum << endl;
    referenceMultiply10(iRefNum);
    cout << "After referenceMultiply10 call - references - pass by reference: " << iRefNum << endl;
    cout << endl;
}