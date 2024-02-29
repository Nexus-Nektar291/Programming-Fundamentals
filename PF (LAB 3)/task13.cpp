#include <iostream>
using namespace std;
void tom();
main()
{
    system("cls");
    tom();
}
void tom()
{
    int workdays;
    int holiday;
    int total;
    int sleep;
    int difference;
    cout << "enter holiday in the year" << endl;
    cin >> holiday;
    workdays = 365 - holiday;
    total = workdays * 63 + holiday * 127;
    difference = 30000 - total;
    if (holiday <= 20)
    {
        cout << "cat can sleep well....."
             << "it has" << difference << "minute to sleep" << endl;
    }
    if (holiday > 20)
    {
        cout << "tom will run away....." << difference << "minute to sleep" << endl;
    }
}
