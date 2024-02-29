#include <iostream>
using namespace std;
int main()
{
    string temp, humidity;
    cout << "Enter temperature(warm/cold) : ";
    cin >> temp;
    cout << "Enter enviornment(dry/humid) : ";
    cin >> humidity;
    if (temp == "warm" && humidity == "dry")
        cout << "Play tennis ! ";
    if (temp == "warm" && humidity == "humid")
        cout << "Swim ! ";
    if (temp == "cold" && humidity == "dry")
        cout << "Play basketball ! ";
    if (temp == "cold" && humidity == "humid")
        cout << "Watch tv ! ";
}