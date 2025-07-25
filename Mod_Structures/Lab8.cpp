#include<iostream>
#include<string>
#include<fstream>
using namespace std;

struct Household
{
	char codeID[4];
	float income;
	int Members;
};

void printall(Household households[]);
void printaboveavg(Household households[]);
void printbelowpoverty(Household households[]);
void printallsortedincome(Household households[]);
void printmedian(Household households[]);

int main()
{
	ifstream inPut;
	Household households[16];
	int i = 0;
	bool True;
	inPut.open ("8v2input.txt");
	if (inPut.fail())
	{
		cout << "households.txt is not found" << endl;
		return 1;
	}

	while(!inPut.eof())
	{
		inPut >> households[i].codeID;
		inPut >> households[i].income;
		inPut >> households[i].Members;

		i++
	}

	int Choice;
	do {
		True = true;
		cout << endl << "Your choices are: " << endl;
		cout << "----------------" << endl;
		cout << "1. Print All" << endl;
		cout << "2. Print Above Avg" << endl;
		cout << "3. Print Below Poverty" << endl;
		cout << "4. Print All Sorted by Income" << endl;
		cout << "5. Print median Income" << endl;
		cout << "6. exit" << endl;
		cout << "Enter your option: ";
		cin >> Choice;
		switch (Choice) {
			case 1: 
			printall(households);
			break;
			case 2: 
			printaboveavg(households);	
			break;
			case 3: 
			printbelowpoverty(households);
			break;
			case 4: 
			printallsortedincome(households);
			break;
			case 5:
			printmedian(households);
			break;
			case 6:
			cout << "Bye" << endl;
			True = false;
			break;

			default:
				cout << "Bad choice";

	}while (True);
	inPut.close();
	return0;

	system("pause");
	return 0;
}
