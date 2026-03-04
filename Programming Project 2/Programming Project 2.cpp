#include <iostream>
using namespace std;

int main()
{
    const double RISE_RATE = 1.5;

    double rise5 = RISE_RATE * 5;
    double rise7 = RISE_RATE * 7;
    double rise10 = RISE_RATE * 10;

    cout << "In 5 years: " << rise5 << " mm" << endl;
    cout << "In 7 years: " << rise7 << " mm" << endl;
    cout << "In 10 years: " << rise10 << " mm" << endl;

    return 0;
}