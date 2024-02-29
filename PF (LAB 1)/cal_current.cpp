#include <iostream>
using namespace std;
int main()
{
    int time;
    float charge, current;
    cout << "Enter charge: ";
    cin >> charge;
    cout << "Enter time: ";
    cin >> time;
    current = charge / time;
    cout << "current is: " << current;
}
