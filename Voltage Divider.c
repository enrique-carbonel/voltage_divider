#include <iostream>

using namespace std;

int main()
{
    double Vin;
    double Vout;
    double r1;
    double r2;
    cout << "Enter Input Voltage: " << endl;
    cin >> Vin;

    cout << "Enter 1st Resistor: " << endl;
    cin >> r1;

    cout << "Enter 2nd Resistor: " << endl;
    cin >> r2;
    
    Vout = Vin - ((Vin * r1) / (r1 + r2));

    cout << "Output Voltage = " << Vout << " Volts.";

    cout << endl;

    return 0;
}