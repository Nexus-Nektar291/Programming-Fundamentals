#include <iostream>
using namespace std;
int main()
{
    int amount;
    float rupees, dollar = 226.58;
    cout << "Enter dollars : ";
    cin >> amount;
    rupees = dollar * amount;
    cout << "Amount in rupees is : " << rupees;
    return 0;
}