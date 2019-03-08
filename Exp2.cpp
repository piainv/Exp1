#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double Mass,Density,Volume;

    cout << setprecision(2) << showpoint << fixed;
    cout << "Mass: " ;
    cin >> Mass;
    cout << "Density: ";
    cin >> Density;

    Volume = Mass / Density;
    cout << "Volume = " << Volume << endl;

    return 0;
}