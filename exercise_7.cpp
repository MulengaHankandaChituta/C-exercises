// Program that rounds decimal to int
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double number;
    int rounded_number;


    cout << "Enter the number you want to round off: ";
    cin >> number;

    // round the number
    rounded_number = round(number);

    cout << "The rounded number is: " << rounded_number << endl;

    return 0;
}