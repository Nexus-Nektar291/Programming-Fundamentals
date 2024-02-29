#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void name();
main()
{
 system("cls");
 name();
}
void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
 void name()
{
 gotoxy(15,11);
 cout<<"A",
 gotoxy(15,12);
 cout<<"S";
 gotoxy(15,13);
 cout<<"I";
 gotoxy(15,14);
 cout<<"F";
}#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void name();
main()
{
 system("cls");
 name();
}
void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
 void name()
{
 gotoxy(15,11);
 cout<<"A",
 gotoxy(15,12);
 cout<<"S";
 gotoxy(15,13);
 cout<<"I";
 gotoxy(15,14);
 cout<<"F";
}#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void name();
main()
{
 system("cls");
 name();
}
void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
 void name()
{
 gotoxy(15,11);
 cout<<"A",
 gotoxy(15,12);
 cout<<"S";
 gotoxy(15,13);
 cout<<"I";
 gotoxy(15,14);
 cout<<"F";
}