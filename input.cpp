// This program illustrates how input statements work
#include <iostream>
using namespace std;

int main()
{
    int feet;
    int inches;

    cout << "Enter two integers seperated by one or more spaces: ";
    cin >> feet >> inches;
    cout << endl;

    cout << "Feet = " << feet << endl;
    cout << "Inches = " << inches << endl;
    cout << "The person is " << feet << " foot " << inches << " inches " " tall" << endl;
    return 0;
}
