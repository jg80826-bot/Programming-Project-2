#include <iostream>
using namespace std;

int main()
{
    const double numGallons = 20;
    const double mpgTown = 23.5;
    const double mpgHighway = 28.9;

    double inTown = numGallons * mpgTown;
    double onHighway = numGallons * mpgHighway;

    cout << "In town: " << inTown << " miles" << endl;
    cout << "On highway: " << onHighway << " miles" << endl;

    return 0;
}
