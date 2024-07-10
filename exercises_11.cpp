/*Write a program that prompts the capacity in litres, of an
automobile fuel tank and the kilometres per litre the automobile
can be driven. The program outputs the number of kilometres the
automobile can be driven without refueling*/
#include <iostream>
using namespace std;

int main()
{
    double litres;
    double starting_kms;
    double ending_kms;
    double distance_traveled_kms;
    double kilometers_per_litre;
    double total_kilometers;

    cout << "Input the fuel capacity in litres: ";
    cin >> litres;
    cout << "Input the starting kilometers: ";
    cin >> starting_kms;
    cout << "Input ending kilometers: ";
    cin >> ending_kms;
    cout << "Calculate the number of kilometers traveled\n";
    distance_traveled_kms = ending_kms - starting_kms;
    cout << "The number of kilometres traveled is " << distance_traveled_kms << endl;
    cout << "Calculate the number of kilometers per litre\n";
    kilometers_per_litre = distance_traveled_kms / litres;
    cout << "The number of kilometers per litre is " << kilometers_per_litre << endl;
    cout << "Calculate the number of kilometers traveled without refueling\n";
    total_kilometers = litres * kilometers_per_litre;
    cout << "The number of kilometers traveled without refueling is " << total_kilometers << endl;

    return 0;

    
}