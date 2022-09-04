#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	double volume, height, radius = 5.0;
	const double PI = 3.142;
	cout << "Enter height of tank: ";
	cin >> height;
	volume = PI * pow(radius, 2) * height;
	cout << "Volume of water in tank is " << volume << endl;
	return 0;
}
