#include<iostream>
using namespace std;
void table(int num);
main()
{
   int num;
   cout<<"enter number:";
   cin>>num;
   table(num);
}
void table(int num)
{
    for(int i=1;i<=10;i=i+1)
    {
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
    }
}
