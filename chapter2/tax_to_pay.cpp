#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	string itemName;
	int quantity;
	double price, tax = 0.6, Tax_to_pay, total, price_with_tax;
	cout << "Enter name of the item: ";
	getline(cin, itemName);
	cout << "Enter quantity: ";
	cin >> quantity;
	cout << "Enter price of the item: ";
	cin >> price;
	total = price * quantity;
	Tax_to_pay = total * tax;
	price_with_tax = Tax_to_pay + total;
	cout << "========================================\n";
	cout << left<< setw(18) << "Item Name" << ":" << itemName
			<< setw(19) <<"\nQuatity" << ":" << quantity 
			<< setw(19) <<"\nPrice per item" << ":RM" << price 
			<< setw(19) <<"\nTotal" << ":RM" << fixed << setprecision(2) << total 
			<< setw(19) <<"\nTax" << ":0.6%" 
			<< setw(19) << fixed << setprecision(2) << "\nTotal" << ":RM" << price_with_tax << endl;

}
