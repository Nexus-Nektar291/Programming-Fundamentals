#include <iostream>
using namespace std;
main()
{
    int x, y, z, finalv = 0;
    cout << "Enter initial velocity :";
    cin >> x;
    cout << "Enter accleration :";
    cin >> y;
    cout << "Enter time :";
    cin >> z;
    finalv = (x + (y * z));
    cout << "Final velocity is:" << finalv;
}
