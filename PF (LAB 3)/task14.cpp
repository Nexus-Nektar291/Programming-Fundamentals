#include<iostream>
using namespace std;
void printmenu();
void calculateAgreggate;
void comparemarks();
main()
{
 system("cls);
 printmenu();
 calculateAgreggate();
 comparemarks();
}
 void printmenu()
 {
 cout<<"*****************************************************************************************"<<endl;
 cout<<"*                         UET ADMISSION MANAGEMENT SYSTEM                               *"<<endl;
 cout<<"*                                                                                       *"<<endl;
 cout<<"*                                                                                       *"<<endl;
 cout<<"*  ADMISSION   ECAT     MERIT   CAMPUS        BSPROGRAM     PHD     ABOUT US            *"<<endl;
 cout<<"*                                                                                       *"<<endl;
 cout<<"*****************************************************************************************"<<endl;
}
 void calculateAgreggate()
 {
 string name;
 int matric;
 int inter;
 int ecat;
 int Wmatric;
 int Winter;
 int Wecat;
 int aggre;
 cout<<"enter your matric marks"<<endl;
 cin>>matric;
 cout<<"enter your inter marks"<<endl;
 cin>>inter;
 cout<<"enter your ecat marks"<<endl;
 cin>>ecat;
 Wmatric=(matric/1100)*30;
 Winter=(inter/550)*30;
 Wecat=(ecat/400)