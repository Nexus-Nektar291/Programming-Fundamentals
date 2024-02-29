#include<iostream>
using namespace std;
void isequal(int x, int y);
main()
{
 int x;
 int y;
 cout<<"enter first number:"<<endl;
 cin>>x;
 cout<<"enter second number:"<<endl;
 cin>>y;
 isequal(x,y);
}
 void isequal(int x, int y)
{
 if(x==y)
 {
 cout<<"true"<<endl;
 }
 if(x!=y)
 {
 cout<<"false"<<endl;
 }
}