#include <iostream>
using namespace std;
float budget(float amount, string category, int numberofpeople);
main()
{

    system("cls");
    float amount;
    string category;
    int numberofpeople;
    float result;
    float remaining;
    cout << "Enter your budget                : ";
    cin >> amount;
    cout << "Enter your category (VIP/Normal) : ";
    cin >> category;
    cout << "Enter Number of people (10,4,12) : ";
    cin >> numberofpeople;
    result = budget(amount, category, numberofpeople);
    if (category == "VIP")
    {
        remaining = result - (499.99 * numberofpeople);
        if (remaining >= 0)
        {
            cout << "Yes! You have " << remaining << " Qatari Rials left ";
        }
        else
        {
            cout << "Not enough money! You need more " << (-1) * remaining << " Qatari Rials";
        }
    }
    else if (category == "Normal")
    {
        remaining = result - (249.99 * numberofpeople);
        if (remaining >= 0)
        {
            cout << "Yes! You have " << remaining << " Qatari Rials left ";
        }
        else
        {
            cout << "Not enough money! You need more " << (-1) * remaining << " Qatari Rials";
        }
    }
}
/* Function for Budget calculation */
float budget(float amount, string category, int numberofpeople)
{
    float rials;
    rials = 0;
    if (numberofpeople < 5)
    {
        rials = amount - (amount * 0.75);
    }
    else if (4 < numberofpeople && numberofpeople < 10)
    {
        rials = amount - (amount * 0.60);
    }
    else if (9 < numberofpeople && numberofpeople < 25)
    {
        rials = amount - (amount * 0.50);
    }
    else if (24 < numberofpeople && numberofpeople < 50)
    {
        rials = amount - (amount * 0.40);
    }
    else if (numberofpeople >= 50)
    {
        rials = amount - (amount * 0.25);
    }
    return rials;
}