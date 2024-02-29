#include <iostream>
using namespace std;
string getsign(int date, string month);
int main()
{
    int date;
    string month;
    cout << "Enter date : ";
    cin >> date;
    cout << "Enter month name : ";
    cin >> month;
    cout << "Zodaic sign is : " << getsign(date, month);
}
string getsign(int date, string month)
{
    string sign;
    if (date >= 21 && month == "March" || date <= 19 && month == "April")
        sign = "Aries";
    if (date >= 20 && month == "April" || date <= 20 && month == "May")
        sign = "Taurus";
    if (date >= 21 && month == "May" || date <= 20 && month == "June")
        sign = "Gemini";
    if (date >= 21 && month == "June" || date <= 22 && month == "July")
        sign = "Cancer";
    if (date >= 23 && month == "July" || date <= 22 && month == "August")
        sign = "Leo";
    if (date >= 23 && month == "August" || date <= 22 && month == "September")
        sign = "Virgo";
    if (date >= 23 && month == "September" || date <= 22 && month == "October")
        sign = "Libra";
    if (date >= 23 && month == "October" || date <= 21 && month == "November")
        sign = "Scorpio";
    if (date >= 22 && month == "November" || date <= 21 && month == "December")
        sign = "Sagittarious";
    if (date >= 22 && month == "December" || date <= 19 && month == "January")
        sign = "Capricon";
    if (date >= 20 && month == "January" || date <= 18 && month == "February")
        sign = "Aquarious";
    if (date >= 20 && month == "February" || date <= 20 && month == "March")
        sign = "Pisces";
    return sign;
}
