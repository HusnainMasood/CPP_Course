//Husnain Masood
//Lab 6
#include<iostream>
using namespace std;

double validateData (double, string);
double InPatientCharges(int Days, double dailyRate, double medication, double hosp_charge);
double OutPatientCharges(double medication, double hosp_charge);

int main()
{
    string patientStatus;
    int Days = 0;
    double dailyRate = 0, medication = 0, hosp_charge = 0;
    
    cout << "Is the patient an inpatient or an outpatient: ";
    cin >> patientStatus;

    while (patientStatus != 'In' || patientStatus != 'in'
           || patientStatus != 'Out' || patientStatus != 'out')
    {
        cout << "ERROR! Please enter one of the following (In, in, Out, out): ";
        cin >> patientStatus;
    }

    if (patientStatus == 'In' || patientStatus == 'in')
    {
        InPatientCharges();
    }
    else
    {
        OutPatientCharges();
    }

    cout << "Patient status is: " << patientStatus << endl;

    if (patientStatus == 'In' || patientStatus == 'in')
    {
        cout << "Patient was in for " << Days << " days." << endl;
        cout << "Patient has accumulated " << dailyRate << " for the stay." << endl;
        cout << "Patient has accumulated " << medication << " in medication charges for the stay." << endl;
        cout << "Patient has accumulated " << hosp_charge
            << " in charges for hospital related services for the stay." << endl;
    }
    else
    {
        cout << << "Patient has accumulated " << medication
             << " in medication charges for the stay." << endl;
        cout << "Patient has accumulated " << hosp_charge
             << " in charges for hospital related services for the stay." << endl;
    }

    system("pause");
    return 0;
}

double InPatientCharges(int Days, double dailyRate, double medication, double hosp_charge);
{
    cout << "Enter the number of days spent in the hospital: ";
    cin >> Days;


    while (Days < 0)
    {
        cout << "ERROR! In-patients can not have a negative numbers of days"
            << ". Try again: ";
        cin >> Days;
    }
        cout <<"\nPlease enter the daily rate of the in-patient: ";
        cin >> dailyRate;

    while (dailyRate < 0)
        {
            cout << "ERROR! In-patients can not have a negative daily rate"
                 << ". Try again: ";
            cin >> dailyRate;
        }

        cout << "\nPlease enter the Hospital medication charges of the"
             <<" in-patient: ";
        cin >> medication;

     while (medication < 0)
        {
            cout << "ERROR! Hospital medication charges can not have a negative"
                 << " value. Try again: ";
            cin >> medication;
        }

        cout <<"\nPlease enter the Charges for hospital services "
             <<"(lab tests, etc.) of the in-patient: ";
        cin >> hosp_charge;

        while (hosp_charge < 0)
        {
            cout << "ERROR! In-patients can not have a negative charges for"
                 << " hospital services. Try again: ";
            cin >> hosp_charge;
        }
        return (Days, dailyRate, medication, hosp_charge)
}

double OutPatientCharges(double medication, double hosp_charge);
{
    cout << "Please enter the Hospital medication charges of the"
        <<" in-patient: ";
    cin >> medication;

    while (medication < 0)
    {
        cout << "ERROR! Hospital medication charges can not have a negative"
            << " value. Try again: ";
        cin >> medication;
    }

        cout <<"\nPlease enter the Charges for hospital services "
             <<"(lab tests, etc.) of the in-patient: ";
        cin >> hosp_charge;

    while (hosp_charge < 0)
    {
        cout << "ERROR! In-patients can not have a negative charges for"
            << " hospital services. Try again: ";
        cin >> hosp_charge;
    }
    return(medication, hosp_charge);
}
