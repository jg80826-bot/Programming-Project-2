#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double numCustomers = 16500;

    double percentEnergyDrinks = numCustomers * 0.15;
    double percentCitrus = percentEnergyDrinks * 0.58;

    int roundedEnergyDrinks = round(percentEnergyDrinks);
    int roundedCitrus = round(percentCitrus);

    cout << "The approximate number of customers in the survey purchasing one or more energy drinks per week is: " << roundedEnergyDrinks << " customers." << endl;
    cout << "The approximate number of customers in the survey preferring citrus-flavored energy drinks is: " << roundedCitrus << " cutomers." << endl;

    return 0;
}