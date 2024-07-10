#include <iostream>
#include <string>
using namespace std;

const int SECRET = 11;
const double RATE = 12.50;

int main()
{
    int num1;
    int num2;
    int newNum;
    int newNumUpdate;
    string name;
    double hoursWorked;
    double wages;

    cout << "Input a number: ";
    cin >> num1;

    cout << "Input another number: ";
    cin >> num2;

    cout << "The value of num1 is " << num1;
    cout << " and The value of num2 is " << num2 << endl;

    // Multiply the value of num1 * num2
    newNum = num1 * num2;

    cout << "The value of num1 after it is multiplied by num2 is " << newNum  << endl;
    newNumUpdate = newNum + SECRET;
    cout << "After updating newNum the value of newNum is " << newNumUpdate << endl;

    cout << "Enter the person's last name: ";
    cin >> name;
    cout << name << endl;
   
    cout << "Enter a decimal number between 0 and 70: ";
    cin >> hoursWorked;
    cout << hoursWorked << endl;

    cout << "These are the wages the worker earns ";
    wages = hoursWorked * RATE;
    cout << wages << endl;
    
    cout << "Name: " << name << endl;
    cout << "Pay Rate: " << RATE << endl;
    cout << "Hours Worked: " << hoursWorked << endl;
    cout << "Salary: " << wages << endl;



    return 0;
}