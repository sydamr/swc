#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	double E, m, v;
	cout << "Please enter mass: ";
	cin >> m;
	cout << "Please enter speed: ";
	cin >> v;
	E = 0.5 * m * pow(v, 2);
	cout << "Kinetic Energy is equal to " << E << "N" << endl;
	return 0;
}
