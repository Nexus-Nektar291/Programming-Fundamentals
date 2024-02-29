#include <iostream>
using namespace std;
float checkcost(string city, string product, int quantity);
int main()
{
    system("cls");
    cout << "Rate list : " << endl;
    cout << "________________________________________________________" << endl;
    cout << "|   products   |  sharaqpur   |   lahore   |   multan  |" << endl;
    cout << "|   coffee     |  0.50        |   0.40     |   0.45    |" << endl;
    cout << "|   water      |  0.80        |   0.70     |   0.70    |" << endl;
    cout << "|   milk       |  0.20        |   0.15     |   0.10    |" << endl;
    cout << "|   sweets     |  1.45        |   1.30     |   1.35    |" << endl;
    cout << "|   peanuts    |  1.60        |   1.50     |   1.55    |" << endl;
    cout << "________________________________________________________" << endl;
    string product, city;
    int quantity;
    cout << "Enter name of your city : ";
    cin >> city;
    cout << "Enter name of product : ";
    cin >> product;
    cout << "Enter quantity of product : ";
    cin >> quantity;
    cout << "Cost of products is =" << checkcost(city, product, quantity);
    return 0;
}
float checkcost(string city, string product, int quantity)
{
    float cost;
    if (city == "sharaqpur" && product == "coffee")
        cost = 0.50 * quantity;
    if (city == "sharaqpur" && product == "water")
        cost = 0.80 * quantity;
    if (city == "sharaqpur" && product == "milk")
        cost = 1.20 * quantity;
    if (city == "sharaqpur" && product == "sweets")
        cost = 1.45 * quantity;
    if (city == "sharaqpur" && product == "peanuts")
        cost = 1.60 * quantity;
    if (city == "lahore" && product == "coffee")
        cost = 0.40 * quantity;
    if (city == "lahore" && product == "water")
        cost = 0.70 * quantity;
    if (city == "lahore" && product == "milk")
        cost = 1.15 * quantity;
    if (city == "lahore" && product == "sweets")
        cost = 1.30 * quantity;
    if (city == "lahore" && product == "peanuts")
        cost = 1.50 * quantity;
    if (city == "multan" && product == "coffee")
        cost = 0.45 * quantity;
    if (city == "multan" && product == "water")
        cost = 0.70 * quantity;
    if (city == "multan" && product == "milk")
        cost = 1.10 * quantity;
    if (city == "multan" && product == "sweets")
        cost = 1.35 * quantity;
    if (city == "multan" && product == "peanuts")
        cost = 1.55 * quantity;
    return cost;
}