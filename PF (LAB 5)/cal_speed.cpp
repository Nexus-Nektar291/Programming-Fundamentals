#include <iostream>
using namespace std;
string speed(float velocity);
int main()
{
    int velocity;
    cout << "Enter Speed : ";
    cin >> velocity;
    cout << "Your speed is " << speed(velocity);
}
string speed(float velocity)
{
    string inst;
    if (velocity <= 10)
        inst = "Slow ! ";
    else if (velocity > 10 && velocity <= 50)
        inst = "average! ";
    else if (velocity > 50 && velocity <= 150)
        inst = "fast! ";
    else if (velocity > 150 && velocity <= 1000)
        inst = "ultra fast! ";
    else if (velocity > 1000)
        inst = "extremely fast! ";
    return inst;
}