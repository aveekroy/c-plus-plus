#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

// Displaying an array
void Display(Array arr)
{
    cout << "Elements are as follows: " << endl;

    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << endl;
    }
}

void Append(Array *arr, int x)
{
    if (arr->length < arr->size)
        arr->A[arr->length++] = x;
}

void Insert(Array *arr, int index, int x)
{
    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}

int main(int argc, char const *argv[])
{

    Array arr = {{2, 3, 4, 5, 6}, 10, 5};

    Append(&arr, 12);
    Insert(&arr, 0, 19);
    Display(arr);

    return 0;
}
