#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
	double a, b, c;
	cout << "Enter length of two sides of triangle\n";
	cin >> a >> b;
	c = sqrt(pow(a, 2) + pow(b, 2));
	cout << "Hypotenuse of triangle is " << setprecision(3) << c << endl;
	return 0;
}
