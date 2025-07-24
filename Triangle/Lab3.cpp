//Masood, Husnain
//Lab #3C

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string initials;
	double a, b, c, sum;

	cout << "Enter Initials: " << endl;
	cin >> initials;

	cout << "Enter the first length: " << endl;
	cin >> a;

	cout << "Enter the second length: " << endl;
	cin >> b;

	cout << "Enter the third length: " << endl;
	cin >> c;

	sum = (a + b + c) / 2;

	cout << initials << endl;
	cout << a << b << c << endl;

	if (a <= 0 || b <= 0 || c <= 0)
	{
		cout << "Error, sides should not be a negative value." << endl;
	}
	else if (a + b <= c || b + c <= a || c + a <= b) 
	{
		cout << "Error, invalid triangle." << endl;
	}
	else if (a == b && b == c)
	{
		cout << "The triangle is Equilateral." << endl;
		cout << "It is not a right triangle." << endl;
	}
	else if (a == b || b == c || a == c)
	{
		cout << "The triangle is Isosceles." << endl;

		if ((a * a) + (b * b) == (c * c) || (c * c) + (a * a) == (b * b) || (c * c) + (b * b) == (a * a))	{
			cout << "It is a right triangle." << endl;
		
	}
	else
	{
		cout << "The triangle is Scalene." << endl;
		if ((a * a) + (b * b) == (c * c) || (c * c) + (a * a) == (b * b) || (c * c) + (b * b) == (a * a))
			cout << "It is a right triangle." << endl;
	}

	

	system("pause");
	return 0;
}
