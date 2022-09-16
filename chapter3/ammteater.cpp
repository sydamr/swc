#include<iostream>
#include<string>
using namespace std;

// Function declaration
void myFunction(double dramedyTicket, double animationTicket, double horrorTicket, string showTime, int ticketN0 = 0, char movieTypeCode = ' ', string movieType = "", double TotalnetPrice = 0, double TotaltaxPrice = 0, double pricePerTicket = 0, double tax = 0.06, double govTax = 0);

// Start of program
int main()
{
  char showCategory, showTimeCode;
  double taxPrice;
  string showTime;

  cout << "A: Afternoon\nE: Evening\nEnter show category: "; cin >> showCategory;

if(showCategory == 'A')
{
  cout << "1: 11.30 am\n2: 3.00 pm\nEnter show time: "; cin >> showTimeCode;

  if(showTimeCode == '1')
  {
    myFunction(3.44, 5.41, 4.92, "11.30 am");
    showTime = "11.30 am";
  }
  else if (showTimeCode == '2')
  {
    myFunction(3.44, 5.41, 4.92, "3.00 pm");
    showTime = "3.00 pm";
  }
}

else if (showCategory == 'E')
{
  cout << "1: 9.00 pm\n2: 11.00 pm\nEnter show time: "; cin >> showTimeCode;

  if(showTimeCode == '1')
  {
    myFunction(4.92, 6.15, 5.41, "9.00 pm");
    showTime = "9.00 pm";
  }
  else if (showTimeCode == '2')
  {
    myFunction(4.00, 6.00, 5.00, "11.00 pm");
    showTime = "11.00 pm";
  }
}


}
void myFunction(double dramedyTicket, double animationTicket, double horrorTicket, string showTime, int ticketN0, char movieTypeCode, string movieType, double TotalnetPrice, double TotaltaxPrice, double pricePerTicket, double tax, double govTax)
{
  cout << "D: Drama/Comedy\nA: Animation\nH: Thriller/Horror\nChoose movie type: "; cin >> movieTypeCode;
  cout << "Enter quantity: "; cin >> ticketN0;
  if(movieTypeCode == 'D')
  {
    movieType = "Drama/Comedy";
    pricePerTicket = dramedyTicket;
    TotalnetPrice = dramedyTicket * ticketN0;
    govTax = TotalnetPrice * tax;
    TotaltaxPrice = TotalnetPrice + govTax;
  }
  else if(movieTypeCode == 'A')
  {
    movieType = "Animation";
    pricePerTicket = animationTicket;
    TotalnetPrice = animationTicket * ticketN0;
    govTax = TotalnetPrice * tax;
    TotaltaxPrice = TotalnetPrice + govTax;
  }
  else if(movieTypeCode == 'H')
  {
    movieType = "Thriller/Horror";
    pricePerTicket = horrorTicket;
    TotalnetPrice = horrorTicket * ticketN0;
    govTax = TotalnetPrice * tax;
    TotaltaxPrice = TotalnetPrice + govTax;
  }

  cout << "===============================================" << endl;
  cout << "Show time " << showTime << "\nMovie Type: " << movieType << "\nTicket Price: " << pricePerTicket << "\nNumber of Ticket: " << ticketN0 << "\nNet Price: " << TotalnetPrice << "\nGoverment tax: " << govTax << "\nTotal Price: " << TotaltaxPrice;
}
