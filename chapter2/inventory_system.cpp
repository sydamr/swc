#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int butterNo, eggsNO, flourNo;
	double butterPrice, eggsPrice, flourPrice;
	double butterVal, eggsVal, flourVal;
	cout << "Enter quantity of butter: ";
	cin >> butterNo;
	cout << "Enter its price: ";
	cin >> butterPrice;
	cout << "Enter quantity of eggs: ";
	cin >> eggsNO;
	cout << "Enter its price: ";
	cin >> eggsPrice;
	cout << "Enter quantity of flour: ";
	cin >> flourNo;
	cout << "Enter its price: ";
	cin >> flourPrice;
	butterVal = butterNo * butterPrice;
	eggsVal = eggsNO * eggsPrice;
	flourVal =flourNo * flourPrice;
	string seperator = "+--------+---------+\n";
	cout << seperator << left
			 << setw(8) << "| Item" << setw(11) << " | Value" << "|" << endl
			 << seperator
			 << setw(7) <<"| Butter" << " | RM" << setw(6) << butterVal << "|"<< endl
			 << seperator
			 << setw(8) << "| Eggs" << " | RM" << setw(6) << eggsVal << "|" << endl
			 << seperator
			 << setw(8) << "| Flour" << " | RM" << setw(6) << flourVal << "|" << endl
			 << seperator;

}
