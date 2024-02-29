#include<iostream>
using namespace std;
main()
{
string name;
int sub1,sub2,sub3,sub4,sub5;
float per;
cout<<"Enter Your marks in subject 1 :";
cin>>sub1; 
cout<<"Enter Your marks in subject 1 :";
cin>>sub2;
cout<<"Enter Your marks in subject 3 :";
cin>>sub3;
cout<<"Enter Your marks in subject 4 :";
cin>>sub4;
cout<<"Enter Your marks in subject 5 :";
cin>>sub5;
per=((sub1+sub2+sub3+sub4+sub5)*100);
per=per/500;
cout<<"Your percentage is ="<<per;
}