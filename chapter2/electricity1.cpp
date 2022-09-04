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

	daily = (wattage * time) / 1000.0;
	monthly = daily * used;
	cost = monthly * rate;

	cout << "+---------------------------------------------------+\n"
			 << "|" << setw(26) << appliance << setw(26) << "|" << endl
			 << "+-------------------+---------------------+---------+\n"
			 << "| Daily Consumption |" << " Monthly Consumption |" << setw(11) << " Cost |\n"
			 << "+-------------------+---------------------+---------+\n"
			 << "|" << setw(18) << daily << " |" << setw(20) << monthly << " |" << setw(8) << cost << " |" << endl
			 << "+---------------------------------------------------+\n";

}
