#include <iostream>
using namespace std;
int timefunction(int examhour, int examminutes, int arrivalhour, int arrivalminutes);

main()
{
    int examhour;
    int examminutes;
    int arrivalhour;
    int arrivalminutes;
    int value1;
    int value2;
    int answer;
    cout << "Enter exam starting time    (hour) : ";
    cin >> examhour;
    cout << "Enter exam starting time (minutes) : ";
    cin >> examminutes;
    cout << "Enter arrival time in  hour        : ";
    cin >> arrivalhour;
    cout << "Enter arrival time in minutes      : ";
    cin >> arrivalminutes;
    if (examhour < 23 && arrivalhour < 23 && examminutes < 60 && arrivalminutes < 60)
    {
        value1 = (examhour * 60) + examminutes;
        value2 = (arrivalhour * 60) + arrivalminutes;
        int value3 = value2 - value1;
        answer = timefunction(examhour, examminutes, arrivalhour, arrivalminutes);
        if (answer > 59)
        {
            if (value3 == 0)
            {
                cout << "At time " << answer / 60 << ":" << answer % 60;
            }
            else if (value3 > 0)
            {
                cout << "Late " << answer / 60 << ":" << answer % 60;
            }
            else
            {
                cout << "before time " << answer / 60 << ":" << answer % 60;
            }
        }
        else if (answer <= 59)
        {
            if (value3 == 0)
            {
                cout << "At time " << answer / 60 << ":" << answer % 60;
            }
            else if (value3 > 0)
            {
                cout << "Late " << answer / 60 << ":" << answer % 60;
            }
            else
            {
                cout << "before time " << answer / 60 << ":" << answer % 60;
            }
        }
        else
        {
            cout << "output error";
        }
    }
    else
    {
        cout << "Please enter correct time according to formate.";
    }
}
int timefunction(int examhour, int examminutes, int arrivalhour, int arrivalminutes)
{
    int finalanswer;
    int answer;
    answer = ((arrivalhour * 60) + arrivalminutes) - ((examhour * 60) + examminutes);
    if (answer < 0)
    {
        finalanswer = answer * (-1);
    }
    else
    {
        finalanswer = answer;
    }
    return finalanswer;
}