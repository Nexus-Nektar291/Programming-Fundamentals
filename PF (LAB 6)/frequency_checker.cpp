#include <iostream>
using namespace std;

int frequencychecker(int num, int digit)
{
    int total=0;
    int mod=0;
    while(num>0)
    {
        mod=num%10;
        if(mod==digit)
        {
            total=total+1;
        }
        num=num/10;
    }
    return total; 
}

int main()
{
    int num, result, digit;
    cout << "Enter any number : ";
    cin >> num;
    cout << "Enter any digit : ";
    cin >> digit;
    result = frequencychecker(num, digit);
    cout << result;
    return 0;
}
