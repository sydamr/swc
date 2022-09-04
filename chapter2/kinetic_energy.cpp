#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	double E, m, v;
	cout << "Enter mass of sheep: ";
	cin >> m;
	cout << "Enter speed/velocity of sheep: ";
	cin >> v;
	E = 0.5 * m * pow(v, 2);
	cout << "Kinetic energy is equal to " << E << "N\n";
	return 0;
}

