#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	string appliance;
	double rate, wattage, time, daily, monthly, cost;
	int used;

	cout << "Enter the name of electric appliance: "; 
	getline(cin, appliance);
	cout << "Enter wattage of the appliace: ";
	cin >> wattage;
	cout << "Enter current electric rate: ";
	cin >> rate;
	cout << "Enter average time in hours the appliance is used in a day: ";
	cin >> time;
	cout << "Enter how many days the appliance is used per month: ";
	cin >> used;
	cout << "\n\n";

	daily = (wattage * time) / 1000.0;
	monthly = daily * used;
	cost = monthly * rate;

	cout << "+---------------------------------------------------------+" << endl
			 << "|" << setw(40) << right << "SHI Power Assistance System" << setw(18) << "|" << endl
			 << left
			 << setw(36) << "|   Name of electrical appliance" << ": " << setw(20) << appliance << "|"<< endl
			 << setw(36) << "|   Wattage" << ": " << setw(20) << wattage << "|" << endl
			 << setw(36) << "|   Time (hour/per day)" << ": " << setw(20) << time << "|" << endl
			 << setw(36) << "|   Current rate (per W)" << ": " << setw(20) << rate << "|" << endl
			 << setw(36) << "|   Total wattage (per month)" << ": " << setw(20) << wattage << "|" << endl
			 << setw(36) << "|   Total cost (per month)" << ": " << setw(20) << monthly << "|" << endl
			 << "+---------------------------------------------------------+" << endl;
}
