#include <iostream>
using namespace std;
int cal(string day, string month, int amount);
main()
{
    string day, month;
    int amount;
    cout << "Enter amount : ";
    cin >> amount;
    cout << "Enter day : ";
    cin >> day;
    cout << "Enter month : ";
    cin >> month;
    cout << "Total amount after discount is " << cal(day, month, amount);
}
int cal(string day, string month, int amount)
{
    int discount = amount;
    if (day == "Sunday" && (month == "October" || month == "August" || month == "March"))
    {
        discount = amount - (amount * 10) / 100;
    }
    else if (day == "Monday" && (month == "November" || month == "December"))
    {
        discount = amount - (amount * 5) / 100;
    }
    return discount;
}