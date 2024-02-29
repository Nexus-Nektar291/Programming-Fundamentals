#include<iostream>
using namespace std;
main()
{
int bagsize;
int bagcost;
int areaofbag;
cout<<"Enter bag size in pounds: ";
cin>>bagsize;
cout<<"Enter cost of bag: ";
cin>>bagcost;
cout<<"Enter area covered by each bag in square feet: ";
cin>>areaofbag;
cout<<"Cost of the fertilizer per pound: "<<(bagcost/bagsize)<<endl;
cout<<"Cost of fertilizing the area per square feet: "<<(bagcost/areaofbag);
}