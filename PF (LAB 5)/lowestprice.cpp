#include <iostream>
using namespace std;
float lowestprice(int distance, string shift);
int main()
{
    int distance;
    string shift;
    cout << "Enter number of kilometers you want to travel : ";
    cin >> distance;
    cout << "Enter shift (day , night) : ";
    cin >> shift;
    cout << "Lowest price to travel " << distance << " kilometers is = "
         << lowestprice(distance, shift);
    return 0;
}
float lowestprice(int distance, string shift)
{
    float price;
    if (distance <= 20 && shift == "day")
        price = (distance * 0.79) + 0.70;
    if (distance <= 20 && shift == "night")
        price = (distance * 0.90) + 0.70;
    if ((distance > 20 && distance < 100) && (shift == "day" || shift == "night"))
        price = (distance * 0.09);
    if (distance >= 100 && (shift == "day" || shift == "night"))
        price = (distance * 0.06);
    return price;
}