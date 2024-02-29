#include<iostream>
using namespace std;
main()
{
int num,sum,first,second,third,fourth;
cout<<"Enter any number: ";
cin>>num;
first = num%10;
second = (num/10)%10;
third = (num/100)%10;
fourth = (num/1000)%10;
sum = first+second+third+fourth;
cout<<"sum is: "<<sum;
}
