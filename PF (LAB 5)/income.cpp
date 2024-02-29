#include <iostream>
using namespace std;
float totalincome(string screening, int rows, int columns);
int main()
{
    string screening;
    int rows, columns;
    cout << "Enter type of screening : ";
    cin >> screening;
    cout << "Enter type of rows : ";
    cin >> rows;
    cout << "Enter type of columns : ";
    cin >> columns;
    cout << "Total income is = " << totalincome(screening, rows, columns);
}
float totalincome(string screening, int rows, int columns)
{
    float bill;
    float premiere = 12.00, normal = 7.50, discount = 5.00;
    if (screening == "premiere")
        bill = (premiere * (rows * columns));
    else if (screening == "normal")
        bill = (normal * (rows * columns));
    else if (screening == "discount")
        bill = (discount * (rows * columns));
    return bill;
}