#include <iostream>
using namespace std;
float totalprice(string fruitname, string day, float quantity);
int main()
{
    string fruitname, day;
    float quantity;
    cout << "Enter day : ";
    cin >> day;
    cout << "Enter name of fruit : ";
    cin >> fruitname;
    cout << "Enter quantity : ";
    cin >> quantity;
    cout << "Total price is = " << totalprice(fruitname, day, quantity);
}
float totalprice(string fruitname, string day, float quantity)
{
    float price;
    if (day == "sunday")
    {
        if (fruitname == "banana")
            price = 2.70 * quantity;
        if (fruitname == "apple")
            price = 1.25 * quantity;
        if (fruitname == "orange")
            price = 0.90 * quantity;
        if (fruitname == "grapefruit")
            price = 1.60 * quantity;
        if (fruitname == "kiwi")
            price = 3.00 * quantity;
        if (fruitname == "pineapple")
            price = 5.60 * quantity;
        if (fruitname == "grapes")
            price = 4.20 * quantity;
    }
    else if (day != "sunday")
    {
        if (fruitname == "banana")
            price = 2.50 * quantity;
        if (fruitname == "apple")
            price = 1.20 * quantity;
        if (fruitname == "orange")
            price = 0.85 * quantity;
        if (fruitname == "grapefruit")
            price = 1.45 * quantity;
        if (fruitname == "kiwi")
            price = 2.70 * quantity;
        if (fruitname == "pineapple")
            price = 5.50 * quantity;
        if (fruitname == "grapes")
            price = 3.85 * quantity;
    }
    return price;
}