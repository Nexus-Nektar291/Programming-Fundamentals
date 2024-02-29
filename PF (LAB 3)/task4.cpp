#include<iostream>
#include<windows.h>
void gotoxy(int,int);
void maze();
void move(int x, int y);
main()
{
 system("cls");
 maze();
 int x=3;
 int y=3;
 while(true)
 {
 move(x,y);
 if(x<20)
 {
  x=x+1;
 }
 if(x==20)
 {
 gotoxy(x-1,y);
 cout<<"";
 x=3
 }
 }
}
void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
 void maze();
{
cout<<"###############################################################"<<endl;
cout<<"#                                                             #"<<endl;
cout<<"#                                                             #"<<endl;
cout<<"#                                                             #"<<endl;
cout<<"#                                                             #"<<endl;
cout<<"#                                                             #"<<endl;
cout<<"#                                                             #"<<endl;
cout<<"#                                                             #"<<endl;
cout<<"#                                                             #"<<endl;
cout<<"#                                                             #"<<endl;
cout<<"#                                                             #"<<endl;
cout<<"###############################################################"<<endl;
}