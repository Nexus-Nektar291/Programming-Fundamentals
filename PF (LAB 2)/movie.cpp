#include<iostream>
using namespace std;
main()
{
string movie;
int adultprice,childprice,adultsold,childsold,per,total;
cout<<"Enter movie name: ";
cin>>movie;
cout<<"Adult ticket price: ";
cin>>adultprice;
cout<<"Child ticket price: ";
cin>>childprice;
cout<<"Enter number of  adult tickets sold: ";
cin>>adultsold;
cout<<"Enter number of  child tickets sold: ";
cin>>childsold;
cout<<"Enter percentage to donate: ";
cin>>per;
total=((adultprice*adultsold)+(childprice*childsold));
cout<<"Total amount generated = "<<total<<endl;
per=(total/100)*per;
cout<<"Amount after donation = "<<total-per;
}
 