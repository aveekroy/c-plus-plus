#include <iostream>
using namespace std;

int main()
{
    //your code goes here

    int no_of_passengers = 12;

    if (no_of_passengers < 50)
    {
        cout << (50 - no_of_passengers) << endl;
    }
    else
    {
        cout << (50 - (no_of_passengers % 50)) << endl;
    }

    return 0;
}