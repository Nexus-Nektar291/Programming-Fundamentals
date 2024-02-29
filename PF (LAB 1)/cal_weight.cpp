#include <iostream>
using namespace std;
int main()
{
    float total, weight, pounds = 0.45;
    cout << "Enter weight in pounds : ";
    cin >> weight;
    total = pounds * weight;
    cout << "weight in kg is : " << total;
    return 0;
}