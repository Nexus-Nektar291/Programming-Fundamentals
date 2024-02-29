#include <iostream>
using namespace std;
int main()
{
    string month;
    string room;
    int days;
    float price;
    cout << "Enter room of stay (apartment / studio) : ";
    cin >> room;
    cout << "Enter month of stay : ";
    cin >> month;
    cout << "Enter number days in stay : ";
    cin >> days;

    if (days > 7)
    {
        if ((month == "may" || month == "october") && (room == "studio"))
        {
            if (days > 14)
            {
                price = days * 50;
                price = (price - (price * 30) / 100);
            }
            else
            {
                price = days * 50;
                price = (price - (price * 5) / 100);
            }
        }
    }
    if (days > 14)
    {
        if ((month == "may" || month == "october") && (room == "apartment"))
        {
            price = days * 65;
            price = (price - (price * 10) / 100);
        }
    }

    if ((month == "may" || month == "october") && (room == "studio"))
    {
        price = days * 50;
    }
    if ((month == "may" || month == "october") && (room == "apartment"))
    {
        price = days * 65;
    }
}

if (days > 14)
{
    if ((month == "june " || month == "september") && (room == "studio"))
    {
        price = days * 75.20;
    }
    price = (price - (price * 30) / 100);
    if ((month == "june" || month == "september") && (room == "apartment"))
    {
        price = days * 68.70;
        price = (price - (price * 30) / 100);
    }
}
else
{
    if ((month == "june " || month == "september") && (room == "studio"))
    {
        price = days * 75.20;
    }
    if ((month == "june" || month == "september") && (room == "apartment"))
    {
        price = days * 68.70;
    }
}
}
}

{
    if ((month == "july" || month == "august") && (room == "studio"))
    {
        price = days * 76;
        price = (price - (price * 30) / 100);
    }
    if ((month == "july" || month == "august") && (room == "apartment"))
    {
        price = days * 77;
        price = (price - (price * 30) / 100);
    }
}
}
