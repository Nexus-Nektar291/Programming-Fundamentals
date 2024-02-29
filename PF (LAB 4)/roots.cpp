#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, c;
    float ans1, ans2, sqr;
    cout << "Enter value of a : ";
    cin >> a;
    cout << "Enter value of b : ";
    cin >> b;
    cout << "Enter value of c : ";
    cin >> c;
    sqr = sqrt((b * b) - (4 * a * c));
    ans1 = ((-b + sqr) / (2 * a));
    ans2 = ((-b - sqr) / (2 * a));
    cout << ans1 << endl;
    cout << ans2;
    return 0;
}
