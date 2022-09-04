#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double weight, totalCharge;
	const int CHARGE = 15.0;
	cout << "Enter weight of parcels: "; cin >> weight;
	totalCharge = weight * CHARGE;
	cout << "Total amount charge is RM" << fixed << setprecision(2) << totalCharge << endl;
}
