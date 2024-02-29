#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "Enter your name : ";
    cin >> name;
    float matric;
    cout << "Enter your marks in matric from 1100: ";
    cin >> matric;
    float inter;
    cout << "Enter your marks in inter from 550: ";
    cin >> inter;
    float ecat;
    cout << "Enter your marks in ecat from 400: ";
    cin >> ecat;
    float pmat;
    pmat = ((matric / 1100) * 100) * (0.1);
    float pint;
    pint = ((inter / 550) * 100) * (0.4);
    float pecat;
    pecat = ((ecat / 400) * 100) * (0.5);
    cout << "Your total percentage in matric is = " << pmat << endl;
    cout << "Your total percentage in inter is = " << pint << endl;
    cout << "Your total percentage in ecat is = " << pecat << endl;
    float aggregate;
    aggregate = pmat + pint + pecat;
    cout << name << " your total aggregate is = " << aggregate;
    return 0;
}
