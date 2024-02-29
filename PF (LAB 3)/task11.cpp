#include <iostream>
using namespace std;
void ticket();
main()
{
    system("cls");
    ticket();
}
void ticket()
{
    while (true)
    {
        string country;
        int ticket;
        int discount;
        int payableamount;
        cout << "enter the name of country" << endl;
        cin >> country;
        cout << "price of ticket in dollar" << endl;
        cin >> ticket;

        if (country == "pakistan")
        {
            discount = ticket * 5 / 100;
            payableamount = ticket - discount;
            cout << "price with discount" << payableamount;
        }
        if (country == "ireland")
        {
            discount = ticket * 10 / 100;
            payableamount = ticket - discount;
            cout << "price with discount" << payableamount;
        }
        if (country == "india")
        {
            discount = ticket * 20 / 100;
            payableamount = ticket - discount;
            cout << "price with discount" << payableamount;
        }
        if (country == "england")
        {
            discount = ticket * 30 / 100;
            payableamount = ticket - discount;
            cout << "price with discount" << payableamount;
        }
        if (country == "canada")
        {
            discount = ticket * 45 / 100;
            payableamount = ticket - discount;
            cout << "price with discount" << payableamount;
        }
    }
}