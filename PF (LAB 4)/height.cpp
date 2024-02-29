#include <iostream>
#include <cmath>
using namespace std;
main()
{
    float distance, degrees, radians, height, angle;
    float radian = 57.2958;
    cout << "Enter distance from base: ";
    cin >> distance;
    cout << "Enter angle of elevation in degrees: ";
    cin >> degrees;
    radians = degrees / radian;
    angle = tan(radians);
    height = angle * distance;
    cout << "Height of tree from base is = " << height;
}