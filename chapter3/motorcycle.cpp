#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

void motor(string motorCategory, string model1, string model2, double priceModel1, double priceModel2, double priceTotal = 0, double tax = 0.06, double paymentMonthly = 0, double interestRate = 0.0025, string modelName = "", double price = 0, char loanDurationcode = ' ', double loanDuration = 0, char modelCode = ' ');

int main()
{
  char motorCategory, motorModelcode;

  cout << "B: Standard Bikes\nS: Scooters\nP: Superbikes\n";
  cout << "Please Enter motorcycle category: ";
  cin >> motorCategory;
  
  if(motorCategory == 'B')
  {
    motor("Standard Bikes", "Kawasaki Z650", "Royal Enflied INT 650", 3666, 6799);
  }
  else if (motorCategory == 'S')
  {
    motor("Scooters", "Suzuki Burgman 400", "Yamaha Zuma", 6199, 1399);
  }
  else if (motorCategory == 'P')
  {
    motor("Superbikes", "Ducati 848 EVO", "Ducati Super Sport S", 10995, 10795);
  }

}


void motor(string motorCategory, string model1, string model2, double priceModel1, double priceModel2, double priceTotal, double tax, double paymentMonthly, double interestRate, string modelName, double price, char loanDurationcode, double loanDuration,char modelCode)
{
  cout << "1: " << model1;
  cout << "\n2: " << model2;
  cout << "\nSelect your model: ";
  cin >> modelCode;

  if(modelCode == '1')
  {
    priceTotal = (priceModel1 * tax) + priceModel1;
    modelName = model1;
    price = priceModel1;
  }
  
  else if(modelCode == '2')
  {
    priceTotal = (priceModel2 * tax) + priceModel2;
    modelName = model2;
    price = priceModel2;
  }
  else{ cout << "Invalid model. Please select model 1 or 2\n";}

  cout << "Select duration loan 5/9 years: ";
  cin >> loanDurationcode;
  if(loanDurationcode == '5')
  {
    loanDuration = 60;
  }

  else if(loanDurationcode == '9')
  {
    loanDuration = 108;
  }
  paymentMonthly = (priceTotal * interestRate * (pow(1 + 0.0025, loanDuration))) / ((pow(1 + 0.0025, loanDuration)) - 1);
  cout << "==================================================\n";
  cout << "Motorcycle category   : " << motorCategory 
       << "\nMotorcyle model       : " << modelName 
       << "\nPrice                 : RM" << price 
       << "\nPrice (+6% tax)       : RM" << fixed << setprecision(2) <<  priceTotal 
       << "\nLoan duration (years) : " << loanDurationcode 
       << "\nMonthly payment       : RM" << fixed << setprecision(2) << paymentMonthly << endl
       << "==================================================\n";
}
