//include statement(s)
#include <iostream>
//using namespace statement
using namespace std;

int main()
{
        //variable declaration
    double num1;
    double num2;
    double num3;
    double average;

        //executable statements
    num1 = 75.35;
    num2 = -35.56;
    num3 = 15.76;
    average = num1 + num2 + num3 / 3;

    cout << "num1 is \n" << num1;
    cout << "\nnum2 is \n" << num2;
    cout << "\nnum3 is \n" << num3;
    cout << "\naverage is \n" << average << endl;

    return 0;
}