//Husnain Masood
//Convert from pounds to kilograms
//Lab 1

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	double pounds, kg;

	cout << "What is your name (first name only): ";
	cin >> name;
	cout << "How many pounds do you weigh? ";
	cin >> pounds;
	kg = pounds / 2.205;
	cout << name << ", you weigh " << kg << endl;
	system("pause");
	return 0;
}
