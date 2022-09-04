#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	string company = "VINTAGE PRIVATE LIMITED",
				 row1 = "Customer Name: ",
				 column1 = "Concrete mixing sand (packs)",
				 column2 = "Steel wire (kg)",
				 column3 = "Strengthened bean (pcs)",
				 column4 = "Bricks (ton)",
				 column5 = "Cement (packs)",
				 name;
	double item1, item2, item3, item4, item5, costitem1, costitem2, costitem3, costitem4, costitem5, total;
	int qitem1, qitem2, qitem3, qitem4, qitem5;

	cout << setw(43) << left << "Enter your name" << ": ";
	getline(cin, name);
	cout << "Enter price of " << setw(28) << left << column1 << ": ";
	cin >> item1;
	cout << setw(43) << left << "Enter the quantity" << ": ";
	cin >> qitem1;

	cout << "Enter price of " << setw(28) << left << column2 << ": ";
	cin >> item2;
	cout << setw(43) << left << "Enter the quantity" << ": ";
	cin >> qitem2;

	cout << "Enter price of " << setw(28) << left << column3 << ": ";
	cin >> item3;
	cout << setw(43) << left << "Enter the quantity" << ": ";
	cin >> qitem3;

	cout << "Enter price of " << setw(28) << left << column4 << ": ";
	cin >> item4;
	cout << setw(43) << left << "Enter the quantity" << ": ";
	cin >> qitem4;

	cout << "Enter price of " << setw(28) << left << column4 << ": ";
	cin >> item5;
	cout << setw(43) << left << "Enter the quantity" << ": ";
	cin >> qitem5;

	costitem1 = item1 * qitem1;
	costitem2 = item2 * qitem2;
	costitem3 = item3 * qitem3;
	costitem4 = item4 * qitem4;
	costitem5 = item5 * qitem5;

	total = costitem1 + costitem2 +costitem3 +costitem4 +costitem5;
	
	string seperator = "+----------------------------------------------------------------------------------------------------------+";

	cout << seperator << endl
			 << "|" << setw(65) << right << company << setw(42) << "|" << endl
			 << seperator << endl
			 << "| " << row1 << setw(90) << left << name << "|" <<endl
			 << "+------------------------------+-----------------+-------------------------+--------------+----------------+" << endl
	 		 << "| " << column1 << " | " << column2 << " | " << column3 << " | " << column4 << " | " << column5 << " |" << endl
			 << "+------------------------------+-----------------+-------------------------+--------------+----------------+" << endl
			 << "| " << "RM" << setw(26) << left << costitem1 << " | " << "RM" << setw(13) << costitem2<< " | " << "RM" << setw(21) << costitem3 << " | " << "RM" << setw(10) << costitem4 << " | " << "RM" << setw(12) << costitem5 << " |" << endl
			 << "+------------------------------+-----------------+-------------------------+--------------+----------------+" << endl
			 << "| " << setw(15) << right << qitem1 << setw(16) << " | " << setw(9) << qitem2 << setw(9) << " | " << setw(13) << qitem3 << setw(13) << " | " << setw(8) << qitem4 << setw(7) << " | " << setw(9) << qitem5 << setw(7) << " |" << endl
			 << "+------------------------------+-----------------+-------------------------+--------------+----------------+" << endl
			 << "|" << setw(55) << "Total Cost" << setw(36) << "| " << "RM" << setw(12) << left<< total << " |" << endl
			 << "+-----------------------------------------------------------------------------------------+----------------+" << endl
			 ;
}

/*| Concrete mixing sand (packs) | Steel wire (kg) | Strengthened bean (pcs) | Bricks (ton) | Cement (packs) |
 * +------------------------------+-----------------+-----
 * --------------------+--------------+
*/

