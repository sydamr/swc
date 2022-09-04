#include<iostream>
#include<math.h>
using namespace std;

int main(){
	double radius, height, volume;
	const double PI = 3.142;
	cout << "Enter radius: ";
	cin >> radius;
	cout << "Enter height: ";
	cin >> height;
	volume = 1 / 3.0 * PI * pow(radius, 2) * height;
	cout << "Volume of cone is " << volume << endl;
	return 0;
}
