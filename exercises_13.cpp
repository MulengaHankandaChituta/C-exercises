//To make a profit, a local store marks up the prices of items by a certain percentage.
//Write a C++ program that reads the original price of the item sold, the percentage of
//the marked-up price, and the sales tax rate. The program then outputs the original 
//price of the item, the percentage of the mark-up, the store's selling price of the 
//item, the sales tax rate, the sales tax, and the final price of the item. (The final
//price of the item is the selling price plus the sales tax.)

#include <iostream>
#include <cmath>

using namespace std;

const int PERCENTAGE = 100;

int main()
{
    double original_price = 175.85;
    double mark_up_price;
    double selling_price = 225.99;
    double mark_up_percentage;
    double sales_tax_amount;
    double sales_tax_rate;
    double final_price;

    cout << "Display the original price\n" << original_price << endl;

    cout << "calculate the mark-up price\n" << endl;
    
    mark_up_price = selling_price - original_price;
    cout << "The mark-up price is\n" << mark_up_price << endl;

    cout << "Calculate the percentage of the mark-up price\n" << endl;
    mark_up_percentage = round(mark_up_price / original_price * PERCENTAGE);
    cout << "The percentage of mark-up is\n" << mark_up_percentage <<  endl;
    cout  << "Calculate the sales tax\n" << endl;
    sales_tax_amount = selling_price - original_price;
    cout << "The sales tax is\n" << sales_tax_amount << endl;
    cout << "Calculate the sales tax rate\n" << endl;
    sales_tax_rate = round(sales_tax_amount / original_price * PERCENTAGE);
    cout << "The sales tax rate is\n" << sales_tax_rate << endl;
    cout << "Calculate the final price\n" << endl;
    final_price = selling_price + sales_tax_amount;
    cout << "The final selling price is\n" << final_price << endl;

    return 0;
}