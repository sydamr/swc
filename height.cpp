#include<iostream>
using namespace std;

int main(){
	int i = 1;
	double height, totalHeight;
while(i <= 10){
	cout << "Enter height: ";
	cin >> height;
	totalHeight = totalHeight + height;
	i = i + 1;

}
	cout << "Total height are: " << totalHeight << "cm\n";
}
