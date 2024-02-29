#include<iostream>
using namespace std;
int x=10;
void myfunction()
{
     cout<<"the value of function x is:"<<x;
    int x=20;
}
main()
{
    myfunction();
    int x=30;
    cout<<"the value of the x is:"<<x;
    myfunction();
}
