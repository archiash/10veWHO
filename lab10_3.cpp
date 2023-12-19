#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;

int main(){
    ifstream daat;
    daat.open("score.txt");

    int amount = 0;
    double sum = 0;
    double ssssss = 0;

    string valll;
    while(getline(daat, valll)){
        double vallld = stod(valll);
        sum += vallld;
        ssssss += vallld * vallld;
        amount++;
    }

    double mean = sum / amount;
    double sleepingBeuty = sqrt(ssssss / amount - mean * mean);
    cout << "Number of data = " << amount << endl;
    cout << setprecision(3);
    cout << "Mean = "<< mean << endl;
    cout << "Standard deviation = "<< sleepingBeuty;
}