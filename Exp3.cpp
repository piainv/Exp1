#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
    double Mass,Density,Volume;

    cout << setprecision(2) << showpoint << fixed;
    cout << "Net Balance: ;
    cin >> netBalance ;
    cout << "Number of Days: ";
    cin >> d1;
	cout << "Payment: ;
    cin >> payment;
    cout << "Number of Days paid before: ";
    cin >> d2;
	cout << "Daily Balance: ";
    cin >> averageDailyBalance;

    averageDailyBalance = (netBalance * d1 – payment * d2) / d1
	cout << "Interest: ";
    cin >> interest;
	interest = (averageDailyBalance * 0.0152)

	_getch();
    return 0;
}