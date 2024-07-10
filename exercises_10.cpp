/*Write a program that prompts the user to input five decimal numbers.
The program should then add the five decimal numbers, convert the
the sum to the nearest integer and print the result*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double num1;
    double num2;
    double num3;
    double num4;
    double num5;
    double sum;
    double result;

    cout << "Input five decimal numbers: ";
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;
    cin >> num5;

    cout << "Let's now add the numbers\n";
    sum = num1 + num2 + num3 + num3 + num4 + num5;
    cout << "The sum of the numbers is " << sum << endl;
    cout << "Now we convert the sum to the nearest integer\n";
    result = round(sum);
    cout << "The final result is " << result << endl;

    return 0; 
}
