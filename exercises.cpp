#include <iostream>
using namespace std;

const double DECIMAL = 5.50;
const string blanks = " ";
const double PAY_RATE = 12.50;

int main()
{
    double height; 
    double weight;
    double discount;
    double billingAmount;
    double bonus;
    int hoursWorked = 45;
    double price;
    

    height = 6.2;
    weight = 156;

    cout << height << " " << weight << endl;

    discount = (2 * height + weight, 10.0);
    price = 49.99;

    billingAmount = price * (1 - discount) - DECIMAL ;
    

    cout << price << blanks << billingAmount << endl;
    bonus = hoursWorked * PAY_RATE / 50;
    cout << "Bonus = " << bonus << endl;

    return 0;
}