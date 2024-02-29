#include<iostream>
using namespace std;
int intdigitsum(int number);
main()
{
int number, result;
cout<<"enter number";
cin>>number;
result=intdigitsum(number);
cout<<result;
}
int intdigitsum(int number)
{
    int mod=0;
    int sum=0;
    while(number>0)
    {
        mod=number%10;
        sum=sum+mod;
        number=number/10;
    }
    return sum;
}