#include <iostream>
using namespace std;

int main()
{
    const double numGallons = 20;

    double inTown = numGallons * 23.5;
    double onHighway = numGallons * 28.9;

    cout << "In town: " << inTown << " miles" << endl;
    cout << "On highway: " << onHighway << " miles" << endl;

    return 0;
}