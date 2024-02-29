#include<iostream>
using namespace std;
void challan();
main()
{
 system("cls");
 challan();
}
 void challan()
{ 
 while(true)
 {
 int speed;
 cout<<"speed of vehical"<<endl;
 cin>>speed;
 if(speed>100)
 {
  cout<<"your vehical is challaned"<<endl;
 }
 if(speed<100)
 {
  cout<<"perfect! your going good"<<endl;
 }
}
}