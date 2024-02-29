#include <iostream>
using namespace std;
float bill(char codetype, char time, int numberofminutes);
main()
{
    char codetype;
    char time;
    int numberofminutes;
    float result;
    cout << "Enter your call type (p/P for Premium & r/R for Regular) : ";
    cin >> codetype;
    cout << "Press D for day & N for night calls                      : ";
    cin >> time;
    cout << "Enter number of minutes you used the service             : ";
    cin >> numberofminutes;
    result = bill(codetype, time, numberofminutes);
    if (result > 0)
    {
        cout << "Yor payable charges are = " << result;
    }
    else
    {
        cout << "Code Type Error! Please enter the correct type ";
    }
}
float bill(char codetype, char time, int numberofminutes)
{
    float amount;
    if ((codetype == 'P' || codetype == 'p') && ((time == 'D' && numberofminutes <= 75) || (time == 'N' && numberofminutes <= 100)))
    {
        amount = 25.00;
    }
    else if ((codetype == 'P' || codetype == 'p') && time == 'D' && numberofminutes > 75)
    {
        amount = (numberofminutes * 0.10) + 25.00;
    }
    else if ((codetype == 'P' || codetype == 'p') && time == 'N' && numberofminutes > 100)
    {
        amount = (numberofminutes * 0.05) + 25.00;
    }
    else if ((codetype == 'R' || codetype == 'r') && numberofminutes <= 50)
    {
        amount = 10.00;
    }
    else if ((codetype == 'R' || codetype == 'r') && numberofminutes > 50)
    {
        amount = (numberofminutes * 0.20) + numberofminutes;
    }
    else
    {
        return 0;
    }
    return amount;
}