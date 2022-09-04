#include<iostream>
using namespace std;

int main()
{
	double F, m; 
	const double g = 9.8;
	cout << "Enter mass: ";
	cin >> m;
	F = m * g;
	cout << "Force is equal to " << F << "N\n";
	return 0;
}
