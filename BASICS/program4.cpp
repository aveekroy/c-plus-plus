#include <iostream>
using namespace std;

int number_sum(int num1, int num2 = 30)
{
    return num1 + num2;
}

int main()
{
    int sum = number_sum(30);
    cout << sum;
    return 0;
}