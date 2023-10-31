//Author: Aidan Dunne
//This program calculates the average of a set of random test scores

#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

const int SIZE = 100;

int main()
{
    vector <int> scores;
    double avg = 0.0;

    //Filling vector with SIZE random test scores between 50 and 100
    for (int i = 0; i < SIZE; i++)
    {
        scores.push_back((rand() % 6 + 5) * 10);
        avg += scores.at(i); //Finding sum of scores to calculate average
    }

    //Calculating average score
    avg /= SIZE;

    //Displaying average score
    cout << "Average score: " << avg << "\n\n";

    return 0;
}
