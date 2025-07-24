//Husnain Masood
//Lab 5 Part 1
#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>

using namespace std;

int main()
{
	ifstream inputFile;
	ofstream outputFile;
	string start, end;
	double months = 0, month_rain = 0.0,
		avrg_rain = 0.0, total_rain = 0.0;

	inputFile.open("Rainfall.txt");

	inputFile >> start;
	inputFile >> end;

	cout << fixed << setprecision(2);

	outputFile << total_rain;
	outputFile << avrg_rain;
	while (inputFile >> month_rain)
	{
		total_rain += month_rain;
		months++;
	}


	avrg_rain = total_rain / months;


	cout << "During the months of " << start
		<< " through " << end << "the total rainfall was "
		<< total_rain << " and the average monthly rainfall was "
		<< avrg_rain << "." << endl;

	inputFile.close();
	

	system("pause");
	return 0;
}
