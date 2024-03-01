#include <iostream>
#include <limits>
#include <conio.h>
using namespace std;
void hotelname();
int signinE();
int signinC();
int hotelusers();
int selectoptions();
void isservices();
int isfloor();
void isroom(int floor);
void ismenu();
void isbill(int num);
void isdiscount(int price);
void iswork();
void signup();
string name_employee[3];
string name_customer[3];
string password_employee[3];
string password_customer[3];
string role_employee[3];
string role_customer[3];
int usercount = 0;
double isday();
int option;
bool a1[10] = {1, 0, 1, 1, 0, 1, 0, 0, 1, 0};
bool a2[10] = {1, 1, 0, 1, 0, 1, 0, 1, 0, 1};
bool a3[10] = {0, 0, 1, 0, 1, 0, 0, 1, 0, 1};
int main()
{
    while (true)
    {

        system("cls");
        hotelname();
        cout << endl;
        selectoptions();
        if (option == 1)
        {
            if (usercount <= 3)
            {
                signup();
                usercount++;
            }
        }
        else if (option == 2)
        {
            if (usercount == 0)
            {
                cout << "Please first signup! ";
                getch();
            }
            else
            {
                hotelusers();
                if (option == 1)
                    signinE();
                if (option == 2)
                    signinC();
            }
        }
    }
}
void hotelname()
{
    cout << "**************************************************************************************************" << endl;
    cout << "* __      _______ _      _               _____ ______        _    _  ____ _______ ______ _       *" << endl;
    cout << "* \\ \\    / /_   _| |    | |        /\\   / ____|  ____|      | |  | |/ __ \\__   __|  ____| |      *" << endl;
    cout << "*  \\ \\  / /  | | | |    | |       /  \\ | |  __| |__         | |__| | |  | | | |  | |__  | |      *" << endl;
    cout << "*   \\ \\/ /   | | | |    | |      / /\\ \\| | |_ |  __|        |  __  | |  | | | |  |  __| | |      *" << endl;
    cout << "*    \\  /   _| |_| |____| |____ / ____ \\ |__| | |____       | |  | | |__| | | |  | |____| |____  *" << endl;
    cout << "*     \\/   |_____|______|______/_/    \\_\\_____|______|      |_|  |_|\\____/  |_|  |______|______| *" << endl;
    cout << "*                                                                                                * " << endl;
    cout << "**************************************************************************************************" << endl;
}
int hotelusers()
{
    {
        cout << " 1 . Employee " << endl;
        cout << " 2 . Customer " << endl;
        cout << "Select option number to signin as : ";
        cin >> option;
        while (!cin)
        {
            cout << "It is not an integer!";
            cout << " Please enter an integer: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> option;
        }

        return option;
    }
}
int signinE()
{
    system("cls");
    hotelname();
    cout << "S I G N I N   A S   E M P L O Y E E :" << endl;
    string name, password, role;
    while (true)
    {
        cout << "Enter your name : ";
        cin >> name;
        cout << "Enter your password : ";
        cin >> password;
        for (int i = 0; i < usercount; i++)
        {
            if (name == name_employee[i] && password == password_employee[i])
                break;

            else
            {
                system("cls");
                hotelname();
                cout << "Invalid I'D or password! " << endl;
                cout << "Enter your name : ";
                cin >> name;
                cout << "Enter your password : ";
                cin >> password;
            }
        }
        break;
    }
    iswork();
    if (option == 1)
    {
        system("cls");
        hotelname();
        cout << "At first floor following rooms are available : " << endl;
        for (int i = 1; i <= 10; i++)
        {
            if (a1[i - 1] == 0)
            {
                cout << "Room number " << i << " is available" << endl;
            }
        }
        cout << endl
             << endl;
        cout << "At second floor following rooms are available : " << endl;
        for (int i = 1; i <= 10; i++)
        {
            if (a2[i - 1] == 0)
            {
                cout << "Room number " << i << " is available" << endl;
            }
        }
        cout << endl
             << endl;
        cout << "At third floor following rooms are available : " << endl;
        for (int i = 1; i <= 10; i++)
        {
            if (a3[i - 1] == 0)
            {
                cout << "Room number " << i << " is available" << endl;
            }
        }
    }
    getch();
    if (option == 2)
    {
        ismenu();
    }
}
int selectoptions()
{
    cout << "1 . SIGNUP" << endl;
    cout << "2 . SIGNIN" << endl;
    cout << "3 . EXIT" << endl;
    cout << "Select any option : ";
    cin >> option;
    while (!cin)
    {
        cout << "It is not an integer!";
        cout << " Please enter an integer: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> option;
    }

    return option;
}
int signinC()
{

    string name, password;
    system("cls");
    hotelname();
    cout << "S I G N I N   A S   C U S T O M E R :" << endl;
    while (true)
    {
        cout << "Enter your name : ";
        cin >> name;
        cout << "Enter your password : ";
        cin >> password;
        for (int i = 0; i < usercount; i++)
        {
            if (name == name_customer[i] && password == password_customer[i])
            {
                break;
            }
            else
            {
                system("cls");
                hotelname();
                cout << "Invalid I'D or password! " << endl;
                cout << "Enter your name : ";
                cin >> name;
                cout << "Enter your password : ";
                cin >> password;
            }
        }
        break;
    }
    system("cls");
    hotelname();
    isservices();
    if (option == 1)
    {
        int floor = isfloor();
        isroom(floor);
    }
    else if (option == 2)
    {
        system("cls");
        hotelname();
        ismenu();
    }
}

void isservices()
{
    while (true)
    {
        cout << "Enter 1 to booked a room : " << endl;
        cout << "Enter 2 to eat a meal : " << endl;
        cout << "Select option : ";
        cin >> option;
        while (!cin)
        {
            cout << "It is not an integer!";
            cout << " Please enter an integer: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> option;
        }
        if (option > 2 || option < 1)
        {
            cout << "Enter valid option! " << endl;
        }
        else
            break;
    }
}
int isfloor()
{
    int floor;
    while (true)
    {
        cout << "Enter floor number from 1 to 3 : ";
        cin >> floor;
        while (!cin)
        {
            cout << "It is not an integer!";
            cout << " Please enter an integer: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> floor;
        }

        if (floor > 3 || floor < 1)
        {
            cout << "Invalid floor number :" << endl;
        }
        else
            return floor;
    }
}
void isroom(int floor)
{
    char input;
    while (true)
    {
        int room;
        if (floor == 1)
        {
            while (true)
            {
                while (true)
                {
                    for (int i = 1; i <= 10; i++)
                    {
                        if (a1[i - 1] == 0)
                        {
                            cout << "Room number " << i << " is available" << endl;
                        }
                    }
                    cout << "Enter your room number from 1 to 10 : ";
                    cin >> room;
                    while (!cin)
                    {
                        cout << "It is not an integer!";
                        cout << " Please enter an integer: ";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cin >> room;
                    }

                    if (room > 10 || room < 1)
                    {
                        cout << "Invalid room number :" << endl;
                    }
                    else
                    {
                        if (a1[room - 1] == 1)
                        {
                            cout << "This room is already booked! " << endl;
                        }
                        else
                        {
                            cout << "Congratulations you have booked room number " << room << endl;
                            a1[room - 1] = 1;
                            break;
                        }
                    }
                }

                cout << "Enter Y to leave or any key to stay! ";
                cin >> input;
                if (input == 'y' || input == 'Y')
                    break;
                else
                {
                    floor = isfloor();
                    break;
                }
            }
        }
        else if (floor == 2)
        {
            while (true)
            {
                while (true)
                {
                    for (int i = 1; i <= 10; i++)
                    {
                        if (a2[i - 1] == 0)
                        {
                            cout << "Room number " << i << " is available" << endl;
                        }
                    }
                    cout << "Enter your room number from 1 to 10 : ";
                    cin >> room;
                    while (!cin)
                    {
                        cout << "It is not an integer!";
                        cout << " Please enter an integer: ";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cin >> room;
                    }

                    if (room > 10 || room < 1)
                    {
                        cout << "Invalid room number :" << endl;
                    }
                    else
                    {
                        if (a2[room - 1] == 1)
                        {
                            cout << "This room is already booked! " << endl;
                        }
                        else
                        {
                            cout << "Congratulations you have booked room number " << room << endl;
                            a2[room - 1] = 1;
                            break;
                        }
                    }
                }
                cout << "Enter Y to leave or any key to stay! " << endl;
                cin >> input;
                if (input == 'y' || input == 'Y')
                    break;
                else
                {
                    floor = isfloor();
                }
                break;
            }
        }
        else if (floor == 3)
        {
            while (true)
            {
                while (true)
                {
                    for (int i = 1; i <= 10; i++)
                    {
                        if (a3[i - 1] == 0)
                        {
                            cout << "Room number " << i << " is available" << endl;
                        }
                    }
                    cout << "Enter your room number from 1 to 10 : ";
                    cin >> room;
                    while (!cin)
                    {
                        cout << "It is not an integer!";
                        cout << " Please enter an integer: ";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cin >> room;
                    }

                    if (room > 10 || room < 1)
                    {
                        cout << "Invalid room number :" << endl;
                    }
                    else
                    {
                        if (a3[room - 1] == 1)
                        {
                            cout << "This room is already booked! " << endl;
                        }
                        else
                        {
                            cout << "Congratulations you have booked room number " << room << endl;
                            a3[room - 1] = 1;
                            break;
                        }
                    }
                }
                cout << "Enter Y to leave or any key to stay! " << endl;
                cin >> input;
                if (input == 'y' || input == 'Y')
                    break;
                else
                {
                    floor = isfloor();
                    break;
                }
            }
        }
        if (input == 'y' || input == 'Y')
            break;
    }
}
void ismenu()
{
    int num;
    cout << "M E N U:" << endl;
    cout << " _________________________________________________________________________________________" << endl;
    cout << "|   Deal No.   |     Rice     |     Dosa     |    Soup      |    Drinks    |    Price     |" << endl;
    cout << "|--------------|--------------|--------------|--------------|--------------|--------------|" << endl;
    cout << "|      1       |  Plain rice  |  Dosa masala | Tomato soup  |   Coca cola  |    1550 rs   |" << endl;
    cout << "|      2       |  Jeera rice  |  Dosa plain  | Ketchup soap |   Seven up   |    1330 rs   |" << endl;
    cout << "|      3       |  Fried rice  |  Family dosa | Chicken soap |    Pepsi     |    1670 rs   |" << endl;
    cout << "|      4       |   Biryani    |  Cheese dosa | Cleer soap   |   Coca cola  |    1900 rs   |" << endl;
    cout << "|      5       |    Palao     |  Kaalan dosa | Corn soap    |   Coca cola  |    1250 rs   |" << endl;
    cout << " _________________________________________________________________________________________" << endl;
    cout << endl;
    do
    {
        cout << "Select option: ";
        cin >> num;
        while (!cin)
        {
            cout << "It is not an integer!";
            cout << " Please enter an integer: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> num;
        }

        if (num < 1 || num > 5)
        {
            cout << "Enter valid option! " << endl;
        }
    } while (num < 1 || num > 5);
    isbill(num);
}
void isbill(int num)
{
    float price;
    if (num == 1)
    {
        price = 1550;
    }
    else if (num == 2)
    {
        price = 1330;
    }
    else if (num == 3)
    {
        price = 1670;
    }
    else if (num == 4)
    {
        price = 1900;
    }
    else if (num == 5)
    {
        price = 1250;
    }
    cout << "Price = " << price << endl;
    isdiscount(price);
}
void isdiscount(int price)
{
    float discount = isday();
    discount = price * discount;
    cout << "Discount = " << discount << endl;
    cout << "Total bill is = " << price - discount << endl
         << endl;
    cout << "T H A N K S    F O R    V I S I T" << endl;
    getch();
}
double isday()
{
    float discount;
    string day;
    cout << "Enter day : ";
    cin >> day;
    if (day == "sunday" || day == "saturday")
    {
        discount = 0.2;
    }
    else
    {
        discount = 0.15;
    }
    return discount;
}
void iswork()
{
    while (true)
    {
        cout << "Enter 1 to show whole setup of available and booked rooms. " << endl;
        cout << "Enter 2 to show menu. " << endl;
        cin >> option;
        while (!cin)
        {
            cout << "It is not an integer!";
            cout << " Please enter an integer: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> option;
        }

        if (option > 2 || option < 1)
        {
            cout << "Enter valid option! " << endl;
        }
        else
            break;
    }
}
void signup()
{
    {
        string role, name, password;
        system("cls");
        hotelname();
        cout << "Enter your role : ";
        cin >> role;
        if (role == "customer")
        {
            role_customer[usercount] = role;
            cout << "Enter your name : ";
            cin >> name_customer[usercount];
            cout << "Enter password : ";
            cin >> password_customer[usercount];
        }
        else if (role == "employee")
        {
            role_employee[usercount] = role;
            cout << "Enter your name : ";
            cin >> name_employee[usercount];
            cout << "Enter password : ";
            cin >> password_employee[usercount];
        }
        cout << "Enter any key to continue : ";
        getch();
    }
}