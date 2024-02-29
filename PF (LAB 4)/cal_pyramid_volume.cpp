#include<iostream>
using namespace std;
float volume(float length, float height, float width,char unit);
main()
{
    system("cls");
    float height;
    float length;
    float width;
    char unit;
    float volume1;
    float volume2;
    cout<<"enter length"<<endl;
    cin>>length;
    cout<<"enter height"<<endl;
    cin>>height;
    cout<<"enter width"<<endl;
    cin>>width;
    cout<<"enter unit m for milli, c for centimeter, m for meter, and km for kilometer"<<endl;
    cin>>unit;
    volume1=volume(length,height,width,unit);
   cout<<"pyramidvolume is ..."<<volume1<<"cubic"<<unit;

}
float volume(float length,float height,float width,char unit)
{
    float volume2;
    float volume3;
    float volume4;
    float volume5;
    volume2=(length*height*width) /3;
     if(unit=='c')
     {
        volume3=volume2*1000000;
        return volume3;
     }
     if(unit=='k')
     {
        volume3=volume2/1000000000;
        return volume3;
     }
     if(unit=='m')
     {
        volume3=volume2*1000000000;
        return volume3;
     }
    return 0; 

}