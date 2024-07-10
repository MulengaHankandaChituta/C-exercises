#include <iostream>
using namespace std;

const int NUMBER_OF_SCORES = 5;

int main()
{
    double score1;
    double score2;
    double score3;
    double score4;
    double score5;
    double average;

    cout << "Enter five test scores: " << endl;
    cin >> score1;
    cin >> score2;
    cin >> score3;
    cin >> score4;
    cin >> score5;

    cout << "Now let's calculate the average of the scores " << endl;

    average = score1 + score2 + score3 + score4 + score5 / NUMBER_OF_SCORES;

    cout << "The average score is " << average << endl;
    

    return 0;
}