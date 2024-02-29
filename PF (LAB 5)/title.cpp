#include <iostream>
using namespace std;
string title(int age, char gender);
int main()
{
    int age;
    char gender;
    cout << "Enter age : ";
    cin >> age;
    cout << "Enter gender : ";
    cin >> gender;
    cout << "Your title is : " << title(age, gender);
}
string title(int age, char gender)
{
    string title1;
    if (age >= 16 && gender == 'm')
    {
        title1 = "Mr.";
    }
    else if (age < 16 && gender == 'm')
    {
        title1 = "Master";
    }
    else if (age >= 16 && gender == 'f')
    {
        title1 = "Ms.";
    }
    else if (age < 16 && gender == 'f')
    {
        title1 = "Miss";
    }
    return title1;
}