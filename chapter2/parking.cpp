#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	string plate, date, company = "ABC PRIVATE PARKING";
	double entry, exit, time, firstHour, anoHour, total;
	cout << "Enter registeration number: ";
	getline(cin, plate);
	cout << "Enter Date(DD/MM/YYYYY): ";
	getline(cin, date);
	cout << "Enter entry time in 24H format (13.00 for 1pm): ";
	cin >> entry;
	cout << "Enter exit time in 24H format (13.00 for 1pm): ";
	cin >> exit;
	time = exit - entry;
	firstHour = 2;
	anoHour =  time - 1;
	total = firstHour + anoHour;
	
	cout << "+----------------------------------------------+" << endl
			 << "|" << setw(33) << company << setw(14) << "|" << endl
			 << "|" << setw(14) << "CAR NUMBER: " << setw(10) << left << plate << right << setw(23) << "|"<< endl 
			 << "|" << setw(8) << "DATE: " << setw(10) << left << date << right << setw(29) << "|" << endl
			 << "|" << setw(16) << "TIME (ENTER): " << setw(4) << left << entry << right << setw(19) << "TIME (EXIT): " << setw(4) << left << exit << setw(4) << right << "|" << endl << right
			 << "|" << setw(17) << "TOTAL PAYMENT: " << "RM" << setw(5) << left << total << setw(23) << right << "|" << endl
			 << "|" << setw(38) << "THANK YOU FOR USING OUR SERVICE" << setw(9) << "|" << endl
			 << "+----------------------------------------------+";
	
}
