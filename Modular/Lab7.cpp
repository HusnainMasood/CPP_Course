#include<iostream>
#include<fstream>

using namespace std;

void FirstNo (int even1, int even2);
void SecondNo (int even1, int even2);
void MultFirEle (int even1, int even2, double& prod)
{
    prod = even1 * even2;
    prod = even1 * even2 / 2;
}
int main()
{
    ifstream input;
    ofstream output;
    int first, second;
    int evenNum[2];
    
    MultFirEle();
    
    
    input.open("textfile.txt");
    output.open("outfile.txt");
    cout << evenNum[2];
    
    input.close();
    output.close();
    return 0;
