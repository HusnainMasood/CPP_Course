//Husnain Masood
//Lab#4
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double Start_Bal, Annual_Rate,
		deposit, withdraw,
		total_deposit = 0.0, total_withdraw = 0.0, total_interest = 0.0, total_end = 0.0,
		interest, month_beg, month_end, account_bal = 0.0;
	int months, counter;

	do {
		cout << "Enter the starting balance on the account: " << endl;
		cin >> Start_Bal;

		if (Start_Bal < 0)
		{
			cout << "Error, the number can't be negative. " << endl;
		}
	} while (Start_Bal < 0);

	do {
		cout << "Enter the annual interest rate on the account: " << endl;
		cin >> Annual_Rate;

		if (Annual_Rate < 0)
		{
			cout << "Error, the number can't be negative. " << endl;
		}
	} while (Annual_Rate < 0);

	do {
		cout << "Enter the month: " << endl;
		cin >> months;

		if (months < 0)
		{
			cout << "Error, the number can't be negative. " << endl;
		}
	} while (months < 0);

	for (counter = 1; counter <= months; counter++)
	{
		if (counter == 1)
		{
			month_beg = Start_Bal;
		}
		else
		{
			month_beg = month_end;
		}
		cout << "Enter the following for month " << counter << ": " << endl;

		do {
			cout << "Enter the money deposited: " << endl;
			cin >> deposit;
			if (deposit < 0)
			{
				cout << "Error, the number can't be negative. " << endl;
			}
		} while (deposit < 0);
		account_bal += deposit;

		do {
			cout << "Enter the money withdrawn: " << endl;
			cin >> withdraw;
			if (withdraw < 0)
			{
				cout << "Error, the number can't be negative. " << endl;
			}
		} while (withdraw < 0);
		
		month_end = month_beg + deposit - withdraw;
		interest = (month_beg + month_end) / 2 * (Annual_Rate / 12);
		cout << fixed << setprecision(2);
		cout << "Interest for this month: " << interest << endl;
		month_end += interest;
		cout << "Ending monthly balance: " << month_end << endl;


		total_deposit += deposit;
		total_withdraw += withdraw;
		total_interest += interest;
	}

	cout << "Quarterly Savings Account Statement" << endl; 
	cout << fixed << setprecision(2);
	cout << "Starting balance: " << Start_Bal << endl;
	cout << "Total deposits: " << total_deposit << endl;
	cout << "Total withdrawals: " << total_withdraw << endl;
	cout << "Total interest: " << total_interest << endl;


	total_end = Start_Bal + total_deposit - total_withdraw + total_interest;

	cout << "Ending Balance: " << total_end << endl;
	


	system("pause");
	return 0;
}
