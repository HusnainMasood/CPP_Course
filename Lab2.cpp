//Husnain Masood
//Lab 2
//10258, Wednesday
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string initials;
	int hours1, hours2, hours3, hours4, hours5;
	double payRate;
	const double TAXES = 0.14;
	const double CLOTHES = 0.20;
	const double SCHOOL_SUPPLIES = 0.05;
	const double SAVINGS = 0.25;
	double Total;
	double Gross;
	double taxes_paid;
	double Net;
	double Clothes;
	double School_Supplies;
	double Amnt_Remaining;
	double Savings;
	double Amount_Left;

	cout << "Enter Initial: " << endl;
	cin >> initials;

	cout << "Enter hours for one week: " << endl;
	cin >> hours1;

	cout << "Enter hours for second week: " << endl;
	cin >> hours2;

	cout << "Enter hours for third week: " << endl;
	cin >> hours3;

	cout << "Enter hours for fourth week: " << endl;
	cin >> hours4;

	cout << "Enter hours for fifth week: " << endl;
	cin >> hours5;

	cout << "Enter the Pay Rate: " << endl;
	cin >> payRate;

	cout << fixed << showpoint << setprecision(2);
 

	Total = hours1 + hours2 + hours3 + hours4 + hours5;
	Gross = Total * payRate;
	taxes_paid = Gross * TAXES;
	Net = Gross - taxes_paid;
	Clothes = Net * CLOTHES;
	School_Supplies = Net * SCHOOL_SUPPLIES;
	Amnt_Remaining = Net - School_Supplies - Clothes;
	Savings = Amnt_Remaining * SAVINGS;
	Amount_Left = Amnt_Remaining - Savings;

	cout << "Initials:                            " << setw(10) << right << initials << endl;
	cout << "Total Hours:                   " << setw(10) << right << Total << endl;
	cout << "Gross Earnings:              " << setw(10) << right << Gross << endl;
	cout << "Taxes Paid:                     " << setw(10) << right << taxes_paid << endl;
	cout << "Net Earnings:                 " << setw(10) << right << Net << endl;
	cout << "Clothing Expense:         " << setw(10) << right << Clothes << endl;
	cout << "Supplies Expense:         " << setw(10) << right << School_Supplies << endl;
	cout << "Amount Remaining:     " << setw(10) << right << Amnt_Remaining << endl;
	cout << "Savings:                          " << setw(10) << right << Savings << endl;
	cout << "Amount left to spend: " << setw(10) << right << Amount_Left << endl;

	system("pause");
	return 0;
}
