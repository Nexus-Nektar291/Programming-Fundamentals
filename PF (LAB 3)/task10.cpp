#include <iostream>
using namespace std;
void revequal(int x, int y);
main()
{
    int x;
    int y;
    cout << "enter first number" << endl;
    cin >> x;
    cout << "enter second number" << endl;
    cin >> y;
    revequal(x, y);
}
void revequal(int x, int y)
{
    if (x == y)
    {
        cout << "false" << endl;
    }
    if (x != y)
    {
        cout << "true" << endl;
    }
}