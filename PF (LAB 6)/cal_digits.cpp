#include<iostream>
using namespace std;
int totalnumber(int num);
main()
{
int num, result;
cout<<"enter number";
cin>>num;
result=totalnumber(num);
cout<<result;
}
int totalnumber(int num)
{
    int total=0;
     while(num>0)
     {
        num=num/10;
        total=total+1;
     }
     return total;
}