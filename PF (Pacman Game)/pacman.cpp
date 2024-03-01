#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cmath>
#include <fstream>

using namespace std;

// extra

void won();
void died();
void page();
void print_maze();
void print_score();
void print_health();
void print_game_name();
string select_options();

// player data

void print_player();
void erase_player();
void move_player_up();
void move_player_down();
void move_player_left();
void move_player_right();
void move_player_bullets();
void generate_player_bullets();

// vertical enemy data

void print_vertical_enemy();
void erase_vertical_enemy();
void vertical_enemy_movement();
void move_vertical_enemy_bullets();
void erase_vertical_enemy_bullets();
void generate_vertical_enemy_bullets();

// horizontal enemy data

void print_horizontal_enemy();
void erase_horizontal_enemy();
void horizontal_enemy_movement();
void move_horizontal_enemy_bullets();
void erase_horizontal_enemy_bullets();
void generate_horizontal_enemy_bullets();

// helping functions

void writefile();
void readfile();
void again_play();
void gotoxy(int x, int y);
char getcharAtxy(short int x, short int y);

//  variables

string file;
string option;
int score = 0;
int health = 20;
int escape_counter = 0;
const int bullet_range = 10000;
int total_bullet_counter = 0;
string horizontal_enemy_direction = "UP";
string vertical_enemy_direction = "RIGHT";

// player bullets

int player_bullet_X;
int player_bullet_Y;
int bullet_X[bullet_range];
int bullet_Y[bullet_range];
int player_bullet_counter = 0;
bool player_bullet_condition[bullet_range];

// vertical enemy bullets

int vertical_enemy_bullet_X;
int vertical_enemy_bullet_Y;
int vertical_enemy_bullet_idx = 0;
int vertical_enemy_bullet_count = 0;
int vertical_enemy_bullet_delay = 0;
int vertical_bullet_X[bullet_range];
int vertical_bullet_Y[bullet_range];
bool vertical_enemy_bullet_condition[bullet_range];

// horizontal enemy bullets

int horizontal_enemy_bullet_X;
int horizontal_enemy_bullet_Y;
int horizontal_enemy_bullet_idx = 0;
int horizontal_enemy_bullet_count = 0;
int horizontal_enemy_bullet_delay = 0;
int horizontal_bullet_X[bullet_range];
int horizontal_bullet_Y[bullet_range];
bool horizontal_enemy_bullet_condition[bullet_range];

//   coordinates

int vertical_enemy_X = 2, vertical_enemy_Y = 2;
int player_coordinate_X = 5, player_coordinate_Y = 35;
int horizontal_enemy_X = 127, horizontal_enemy_Y = 6;

//  shapes

char enemy_vertical_c = 178, enemy_vertical_d = 31;
char enemy_vertical_a = 176, enemy_vertical_b = 177;
char enemy_horizontal_a = 254, enemy_horizontal_b = 177;
char player_a = 219, player_b = 30, player_c = 16, player_d = 17;

char player[4][7] =

    {
        {' ', ' ', ' ', player_b, ' ', ' ', ' '},
        {player_d, ' ', player_a, player_a, player_a, ' ', player_c},
        {' ', ' ', '<', '|', '>', ' ', ' '},
        {' ', ' ', '<', '|', '>', ' ', ' '},

};

char vertical_enemy[4][7] =

    {
        {' ', ' ', enemy_vertical_b, enemy_vertical_c, enemy_vertical_b, ' ', ' '},
        {' ', ' ', ' ', enemy_vertical_c, ' ', ' ', ' '},
        {enemy_vertical_a, enemy_vertical_a, enemy_vertical_b, enemy_vertical_c, enemy_vertical_b, enemy_vertical_a, enemy_vertical_a},
        {' ', ' ', ' ', enemy_vertical_d, ' ', ' ', ' '},

};

char horizontal_enemy[3][5] =

    {
        {' ', '[', enemy_horizontal_a, enemy_horizontal_a, ']'},
        {
            '<',
            enemy_horizontal_b,
            enemy_horizontal_b,
            enemy_horizontal_b,
            enemy_horizontal_b,
        },
        {' ', '[', enemy_horizontal_a, enemy_horizontal_a, ']'},
};

string maze[40][1] =

    {

        {"#######################################################################################################################################"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"||                                                                                                                                   ||"},
        {"#######################################################################################################################################"},
};

int main()

{
    while (true)
    {
        system("cls");

        print_game_name();
        select_options();
        if (option == "1")

        {
            page();
            print_maze();
            print_player();
            print_vertical_enemy();
            print_horizontal_enemy();
            while (true)

            {
                print_score();
                print_health();
                if (GetAsyncKeyState(VK_RIGHT))
                {
                    move_player_right();
                }

                if (GetAsyncKeyState(VK_LEFT))
                {
                    move_player_left();
                }

                if (GetAsyncKeyState(VK_UP))
                {
                    move_player_up();
                }

                if (GetAsyncKeyState(VK_DOWN))
                {
                    move_player_down();
                }

                if (GetAsyncKeyState(VK_SPACE))
                {
                    generate_player_bullets();
                }

                if (GetAsyncKeyState(VK_ESCAPE))
                {
                    break;
                }

                move_player_bullets();
                vertical_enemy_movement();
                horizontal_enemy_movement();
                generate_vertical_enemy_bullets();
                generate_horizontal_enemy_bullets();
                move_vertical_enemy_bullets();
                move_horizontal_enemy_bullets();
                Sleep(20);
            }
        }
        if (option == "2")
        {
            writefile();
            cout << "Successfully saved! ";
            _getch();
        }

        if (option == "3")
        {
            readfile();
            again_play();
        }
        else if (option == "4")
        {
            break;
        }
    }
}

void print_game_name()

{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 13);

    cout << "*****************************************************************************************************************************************************" << endl;
    cout << "*                                                                                                                                                   *" << endl;
    cout << "*       $$$$$$\\  $$$$$$$\\   $$$$$$\\   $$$$$$\\  $$$$$$$$\\              $$$$$$\\  $$\\   $$\\  $$$$$$\\   $$$$$$\\ $$$$$$$$\\ $$$$$$$$\\ $$$$$$$\\            *" << endl;
    cout << "*      $$  __$$\\ $$  __$$\\ $$  __$$\\ $$  __$$\\ $$  _____|            $$  __$$\\ $$ |  $$ |$$  __$$\\ $$  __$$\\\\__$$  __|$$  _____|$$  __$$\\           *" << endl;
    cout << "*      $$ /  \\__|$$ |  $$ |$$ /  $$ |$$ /  \\__|$$ |                  $$ /  \\__|$$ |  $$ |$$ /  $$ |$$ /  $$ |  $$ |   $$ |      $$ |  $$ |          *" << endl;
    cout << "*      \\$$$$$$\\  $$$$$$$  |$$$$$$$$ |$$ |      $$$$$\\                \\$$$$$$\\  $$$$$$$$ |$$ |  $$ |$$ |  $$ |  $$ |   $$$$$\\    $$$$$$$  |          *" << endl;
    cout << "*       \\____$$\\ $$  ____/ $$  __$$ |$$ |      $$  __|                \\____$$\\ $$  __$$ |$$ |  $$ |$$ |  $$ |  $$ |   $$  __|   $$  __$$<           *" << endl;
    cout << "*      $$\\   $$ |$$ |      $$ |  $$ |$$ |  $$\\ $$ |                  $$\\   $$ |$$ |  $$ |$$ |  $$ |$$ |  $$ |  $$ |   $$ |      $$ |  $$ |          *" << endl;
    cout << "*      \\$$$$$$  |$$ |      $$ |  $$ |\\$$$$$$  |$$$$$$$$\\             \\$$$$$$  |$$ |  $$ | $$$$$$  | $$$$$$  |  $$ |   $$$$$$$$\\ $$ |  $$ |          *" << endl;
    cout << "*       \\______/ \\__|      \\__|  \\__| \\______/ \\________|             \\______/ \\__|  \\__| \\______/  \\______/   \\__|   \\________|\\__|  \\__|          *" << endl;
    cout << "*                                                                                                                                                   *" << endl;
    cout << "*****************************************************************************************************************************************************" << endl;
    SetConsoleTextAttribute(h, 15);
}

void print_maze()
{
    system("cls");
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 9);
    for (int i = 0; i < 40; i++)
    {
        cout << maze[i][0] << endl;
    }
    SetConsoleTextAttribute(h, 15);
}

string select_options()
{
    while (true)
    {
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h, 2);
        cout << "Enter 1 to start the game." << endl
             << endl;
        SetConsoleTextAttribute(h, 15);

        h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h, 3);
        cout << "Enter 2 to save the game." << endl
             << endl;
        SetConsoleTextAttribute(h, 15);

        h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h, 4);
        cout << "Enter 3 to play saved game. " << endl
             << endl;
        SetConsoleTextAttribute(h, 15);

        h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h, 5);
        cout << "Enter 4 to exit the  game. " << endl
             << endl;
        SetConsoleTextAttribute(h, 15);

        h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h, 6);
        cout << "Enter your option : ";
        SetConsoleTextAttribute(h, 15);

        cin >> option;
        if (option == "1" || option == "2" || option == "3" || option == "4")
        {
            break;
        }

        else
        {
            system("cls");
            print_game_name();
            h = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h, 3);
            cout << "Enter valid option!" << endl
                 << endl;
            getch();
            SetConsoleTextAttribute(h, 15);
        }
    }
    return (option);
}

void print_player()
{
    gotoxy(player_coordinate_X, player_coordinate_Y);
    for (int i = 0; i < 4; i++)
    {
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h, 10);
        gotoxy(player_coordinate_X, player_coordinate_Y + i);
        for (int j = 0; j < 7; j++)
        {
            cout << player[i][j];
        }
        SetConsoleTextAttribute(h, 15);

        cout << endl;
    }
}

void erase_player()
{
    gotoxy(player_coordinate_X, player_coordinate_Y);
    cout << "       " << endl;
    gotoxy(player_coordinate_X, player_coordinate_Y + 1);
    cout << "       " << endl;
    gotoxy(player_coordinate_X, player_coordinate_Y + 2);
    cout << "       " << endl;
    gotoxy(player_coordinate_X, player_coordinate_Y + 3);
    cout << "       " << endl;
}

void move_player_right()
{

    char nextlocation;
    nextlocation = getcharAtxy(player_coordinate_X + 8, player_coordinate_Y);
    if (nextlocation == ' ')
    {
        erase_player();
        player_coordinate_X++;
        print_player();
    }
    if (nextlocation == enemy_vertical_a || nextlocation == enemy_vertical_b || nextlocation == enemy_vertical_c || nextlocation == enemy_vertical_d || nextlocation == enemy_horizontal_a || nextlocation == enemy_horizontal_b)
    {
        died();
        system("cls");
        print_game_name();
        select_options();
    }
}

void move_player_left()
{
    char nextlocation;
    nextlocation = getcharAtxy(player_coordinate_X - 1, player_coordinate_Y);
    if (nextlocation == ' ')
    {
        erase_player();
        player_coordinate_X--;
        print_player();
    }
    if (nextlocation == enemy_vertical_a || nextlocation == enemy_vertical_b || nextlocation == enemy_vertical_c || nextlocation == enemy_vertical_d || nextlocation == enemy_horizontal_a || nextlocation == enemy_horizontal_b)
    {
        died();
    }
}

void move_player_down()
{
    char nextlocation;
    nextlocation = getcharAtxy(player_coordinate_X, player_coordinate_Y + 4);
    if (nextlocation == ' ')
    {
        erase_player();
        player_coordinate_Y++;
        print_player();
    }
    if (nextlocation == enemy_vertical_a || nextlocation == enemy_vertical_b || nextlocation == enemy_vertical_c || nextlocation == enemy_vertical_d || nextlocation == enemy_horizontal_a || nextlocation == enemy_horizontal_b)
    {
        died();
    }
}

void move_player_up()
{
    char nextlocation;
    nextlocation = getcharAtxy(player_coordinate_X, player_coordinate_Y - 1);
    if (nextlocation == ' ')
    {
        if (player_coordinate_Y <= 6)
        {
            print_player();
        }
        else
        {
            erase_player();
            player_coordinate_Y--;
            print_player();
        }
    }
    if (nextlocation == enemy_vertical_a || nextlocation == enemy_vertical_b || nextlocation == enemy_vertical_c || nextlocation == enemy_vertical_d || nextlocation == enemy_horizontal_a || nextlocation == enemy_horizontal_b)
    {
        died();
    }
}

void generate_player_bullets()
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 10);
    player_bullet_X = player_coordinate_X + 3;
    player_bullet_Y = player_coordinate_Y - 1;
    gotoxy(player_bullet_X, player_bullet_Y);
    cout << "^";
    bullet_X[player_bullet_counter] = player_bullet_X;
    bullet_Y[player_bullet_counter] = player_bullet_Y;
    player_bullet_condition[player_bullet_counter] = true;
    player_bullet_counter++;
    total_bullet_counter++;
    SetConsoleTextAttribute(h, 15);
}

void move_player_bullets()
{
    for (int i = 0; i < total_bullet_counter; i++)
    {
        if (player_bullet_condition[player_bullet_counter] = true)
        {
            char next = getcharAtxy(bullet_X[i], bullet_Y[i] - 1);
            if (next == ' ')
            {
                gotoxy(bullet_X[i], bullet_Y[i]);
                cout << " ";
                bullet_Y[i] = bullet_Y[i] - 1;
                gotoxy(bullet_X[i], bullet_Y[i]);
                HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                SetConsoleTextAttribute(h, 10);
                cout << "^";
                SetConsoleTextAttribute(h, 15);
            }
            else if (next == enemy_vertical_a || next == enemy_vertical_b || next == enemy_vertical_c || next == enemy_vertical_d)
            {
                gotoxy(player_bullet_X, player_bullet_Y);
                cout << " ";
                player_bullet_condition[player_bullet_counter] = false;
                score++;
            }
            else
            {
                gotoxy(bullet_X[i], bullet_Y[i]);
                cout << " ";
                player_bullet_condition[player_bullet_counter] = false;
            }
        }
    }
}

void print_vertical_enemy()
{
    for (int i = 0; i < 4; i++)
    {
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h, 6);
        gotoxy(vertical_enemy_X, vertical_enemy_Y + i);
        for (int j = 0; j < 7; j++)
        {
            cout << vertical_enemy[i][j];
        }
        cout << endl;
        SetConsoleTextAttribute(h, 15);
    }
}

void erase_vertical_enemy()
{
    gotoxy(vertical_enemy_X, vertical_enemy_Y);
    cout << "       " << endl;
    gotoxy(vertical_enemy_X, vertical_enemy_Y + 1);
    cout << "       " << endl;
    gotoxy(vertical_enemy_X, vertical_enemy_Y + 2);
    cout << "       " << endl;
    gotoxy(vertical_enemy_X, vertical_enemy_Y + 3);
    cout << "       " << endl;
}

void vertical_enemy_movement()
{
    {

        if (vertical_enemy_direction == "RIGHT")
        {
            char nextlocation = getcharAtxy(vertical_enemy_X + 8, vertical_enemy_Y + 1);
            if (nextlocation == ' ' || nextlocation == 'o' || nextlocation == '^')
            {
                erase_vertical_enemy();
                vertical_enemy_X++;
                if (vertical_enemy_X == 120)
                {
                    print_vertical_enemy();
                    vertical_enemy_direction = "LEFT";
                }
                else
                    print_vertical_enemy();
            }
        }
        if (vertical_enemy_direction == "LEFT")
        {
            char nextlocation = getcharAtxy(vertical_enemy_X - 1, vertical_enemy_Y);
            if (nextlocation == ' ' || nextlocation == 'o' || nextlocation == '^')
            {
                erase_vertical_enemy();
                vertical_enemy_X--;
                print_vertical_enemy();
            }

            if (nextlocation == '|')
            {
                vertical_enemy_direction = "RIGHT";
            }
        }
    }
}

void generate_vertical_enemy_bullets()
{

    if (vertical_enemy_bullet_delay == 5)
    {
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h, 6);
        gotoxy(vertical_enemy_X + 3, vertical_enemy_Y + 5);
        cout << ".";
        vertical_bullet_X[vertical_enemy_bullet_idx] = vertical_enemy_X + 3;
        vertical_bullet_Y[vertical_enemy_bullet_idx] = vertical_enemy_Y + 5;
        vertical_enemy_bullet_condition[vertical_enemy_bullet_idx] = true;
        vertical_enemy_bullet_idx++;
        vertical_enemy_bullet_count++;
        vertical_enemy_bullet_delay = 0;
        SetConsoleTextAttribute(h, 15);
    }

    vertical_enemy_bullet_delay++;
}

void move_vertical_enemy_bullets()
{
    for (int i = 0; i < vertical_enemy_bullet_count; i++)
    {

        if (vertical_enemy_bullet_condition[i] = true)
        {
            char next = getcharAtxy(vertical_bullet_X[i], vertical_bullet_Y[i] + 1);
            if (next == ' ')
            {
                gotoxy(vertical_bullet_X[i], vertical_bullet_Y[i]);
                cout << " ";
                vertical_bullet_Y[i]++;
                gotoxy(vertical_bullet_X[i], vertical_bullet_Y[i]);
                HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                SetConsoleTextAttribute(h, 6);
                cout << ".";
                SetConsoleTextAttribute(h, 15);
            }

            else if (next == player_a || next == player_b || next == player_c || next == player_d)
            {
                gotoxy(vertical_bullet_X[i], vertical_bullet_Y[i]);
                cout << " ";
                vertical_enemy_bullet_condition[i] = false;
                health--;
            }
            else
            {
                gotoxy(vertical_bullet_X[i], vertical_bullet_Y[i]);
                cout << " ";
                vertical_enemy_bullet_condition[i] = false;
            }
        }
    }
}

void erase_vertical_enemy_bullets()
{
    gotoxy(vertical_enemy_X + 3, vertical_enemy_Y + 4);
    cout << " ";
}

void print_horizontal_enemy()
{
    for (int i = 0; i < 3; i++)
    {
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h, 4);
        gotoxy(horizontal_enemy_X, horizontal_enemy_Y + i);
        for (int j = 0; j < 5; j++)
        {
            cout << horizontal_enemy[i][j];
        }

        cout << endl;
        SetConsoleTextAttribute(h, 15);
    }
}

void erase_horizontal_enemy()
{
    gotoxy(horizontal_enemy_X, horizontal_enemy_Y);
    cout << "     " << endl;
    gotoxy(horizontal_enemy_X, horizontal_enemy_Y + 1);
    cout << "     " << endl;
    gotoxy(horizontal_enemy_X, horizontal_enemy_Y + 2);
    cout << "     " << endl;
}

void horizontal_enemy_movement()
{

    if (horizontal_enemy_direction == "DOWN")
    {
        char nextlocation = getcharAtxy(horizontal_enemy_X, horizontal_enemy_Y + 3);
        if (nextlocation == ' ' || nextlocation == '^' || nextlocation == '.')
        {
            erase_horizontal_enemy();
            horizontal_enemy_Y++;
            print_horizontal_enemy();
        }

        if (nextlocation == '#')
        {
            horizontal_enemy_direction = "UP";
        }
    }
    if (horizontal_enemy_direction == "UP")
    {
        char nextlocation = getcharAtxy(horizontal_enemy_X, horizontal_enemy_Y - 1);
        if (nextlocation == ' ' || nextlocation == '^' || nextlocation == '.')
        {
            erase_horizontal_enemy();
            horizontal_enemy_Y--;
            if (horizontal_enemy_Y == 5)
            {
                print_horizontal_enemy();
                horizontal_enemy_direction = "DOWN";
            }
            else
                print_horizontal_enemy();
        }
    }
}

void generate_horizontal_enemy_bullets()

{
    if (horizontal_enemy_bullet_delay == 50)
    {
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h, 4);
        gotoxy(horizontal_enemy_X - 3, horizontal_enemy_Y + 1);
        cout << "o";
        horizontal_bullet_X[horizontal_enemy_bullet_idx] = horizontal_enemy_X - 3;
        horizontal_bullet_Y[horizontal_enemy_bullet_idx] = horizontal_enemy_Y + 1;
        horizontal_enemy_bullet_condition[horizontal_enemy_bullet_idx] = true;
        horizontal_enemy_bullet_idx++;
        horizontal_enemy_bullet_count++;
        horizontal_enemy_bullet_delay = 0;
        SetConsoleTextAttribute(h, 15);
    }
    horizontal_enemy_bullet_delay++;
}

void move_horizontal_enemy_bullets()
{

    for (int i = 0; i < horizontal_enemy_bullet_count; i++)
    {

        if (horizontal_enemy_bullet_condition[i] = true)
        {

            char next = getcharAtxy(horizontal_bullet_X[i] - 1, horizontal_bullet_Y[i]);
            if (next == ' ')
            {
                gotoxy(horizontal_bullet_X[i], horizontal_bullet_Y[i]);
                cout << " ";

                if (player_coordinate_Y + 2 > horizontal_bullet_Y[i])
                {
                    if (escape_counter == 2)
                    {
                        horizontal_bullet_Y[i]++;
                        escape_counter = 0;
                    }
                    else
                        horizontal_bullet_Y[i]++;
                }

                else if (player_coordinate_Y + 2 < horizontal_bullet_Y[i])
                {
                    if (escape_counter == 2)
                    {
                        horizontal_bullet_Y[i]--;
                        escape_counter = 0;
                    }
                    else
                        horizontal_bullet_Y[i]--;
                }
                horizontal_bullet_X[i]--;
                escape_counter++;
                gotoxy(horizontal_bullet_X[i], horizontal_bullet_Y[i]);
                HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                SetConsoleTextAttribute(h, 4);
                cout << "o";
                SetConsoleTextAttribute(h, 15);
            }

            else if (next == player_a || next == player_b || next == player_c || next == player_d)
            {

                gotoxy(horizontal_bullet_X[i], horizontal_bullet_Y[i]);
                cout << " ";
                horizontal_enemy_bullet_condition[i] = false;
                health--;
            }

            else
            {
                gotoxy(horizontal_bullet_X[i], horizontal_bullet_Y[i]);
                cout << " ";
                horizontal_enemy_bullet_condition[i] = false;
            }
        }
    }
}

void erase_horizontal_enemy_bullets()
{
    gotoxy(horizontal_enemy_X - 2, horizontal_enemy_Y + 1);
    cout << " ";
}

void print_score()
{
    gotoxy(137, 5);
    cout << "Score is : " << score;
}

void print_health()
{
    gotoxy(137, 9);
    cout << "Player health is : " << health;
}

void writefile()
{
    fstream write;
    write.open("data.txt", ios::out);
    write << player_coordinate_X << "," << player_coordinate_Y << "," << vertical_enemy_X << "," << vertical_enemy_Y << "," << horizontal_enemy_X << "," << horizontal_enemy_Y << "," << score << "," << health;
    write.close();
}

void readfile()
{
    fstream read;
    read.open("data.txt", ios::in);
    getline(read, file);
    read.close();
}
string seperate(string data, int idx)
{
    int comma = 1;
    string result = "";
    for (int i = 0; i < data.length(); i++)
    {
        if (data[i] == ',')
        {
            comma++;
        }
        else if (comma == idx)
        {
            result = result + data[i];
        }
    }
    return result;
}

void again_play()
{
    string jilani;
    jilani = seperate(file, 1);
    player_coordinate_X = atoi(jilani.c_str());
    jilani = seperate(file, 2);
    player_coordinate_Y = atoi(jilani.c_str());
    jilani = seperate(file, 3);
    vertical_enemy_X = atoi(jilani.c_str());
    jilani = seperate(file, 4);
    vertical_enemy_Y = atoi(jilani.c_str());
    jilani = seperate(file, 5);
    horizontal_enemy_X = atoi(jilani.c_str());
    jilani = seperate(file, 6);
    horizontal_enemy_Y = atoi(jilani.c_str());
    jilani = seperate(file, 7);
    score = atoi(jilani.c_str());
    jilani = seperate(file, 8);
    health = atoi(jilani.c_str());
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

char getcharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufsize;
    coordBufsize.X = 1;
    coordBufsize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufsize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}

void won()
{
    cout << endl;
    cout << "      $$\\     $$\\  $$$$$$\\  $$\\   $$\\       $$\\      $$\\  $$$$$$\\  $$\\   $$\\       $$\\ " << endl;
    cout << "      \\$$\\   $$  |$$  __$$\\ $$ |  $$ |      $$ | $\\  $$ |$$  __$$\\ $$$\\  $$ |      $$ |" << endl;
    cout << "       \\$$\\ $$  / $$ /  $$ |$$ |  $$ |      $$ |$$$\\ $$ |$$ /  $$ |$$$$\\ $$ |      $$ |" << endl;
    cout << "        \\$$$$  /  $$ |  $$ |$$ |  $$ |      $$ $$ $$\\$$ |$$ |  $$ |$$ $$\\$$ |      $$ |" << endl;
    cout << "         \\$$  /   $$ |  $$ |$$ |  $$ |      $$$$  _$$$$ |$$ |  $$ |$$ \\$$$$ |      \\__|" << endl;
    cout << "          $$ |    $$ |  $$ |$$ |  $$ |      $$$  / \\$$$ |$$ |  $$ |$$ |\\$$$ |          " << endl;
    cout << "          $$ |     $$$$$$  |\\$$$$$$  |      $$  /   \\$$ | $$$$$$  |$$ | \\$$ |      $$\\ " << endl;
    cout << "          \\__|     \\______/  \\______/       \\__/     \\__| \\______/ \\__|  \\__|      \\__|" << endl;
    cout << endl;
    cout << endl;
    cout << "Enter any key to continue : ";
    _getch();
}

void died()
{
    char a;
    system("cls");
    cout << endl;
    cout << "      $$\\     $$\\  $$$$$$\\  $$\\   $$\\       $$$$$$$\\  $$$$$$\\ $$$$$$$$\\ $$$$$$$\\        $$\\ " << endl;
    cout << "      \\$$\\   $$  |$$  __$$\\ $$ |  $$ |      $$  __$$\\ \\_$$  _|$$  _____|$$  __$$\\       $$ |" << endl;
    cout << "       \\$$\\ $$  / $$ /  $$ |$$ |  $$ |      $$ |  $$ |  $$ |  $$ |      $$ |  $$ |      $$ |" << endl;
    cout << "        \\$$$$  /  $$ |  $$ |$$ |  $$ |      $$ |  $$ |  $$ |  $$$$$\\    $$ |  $$ |      $$ |" << endl;
    cout << "         \\$$  /   $$ |  $$ |$$ |  $$ |      $$ |  $$ |  $$ |  $$  __|   $$ |  $$ |      \\__|" << endl;
    cout << "          $$ |    $$ |  $$ |$$ |  $$ |      $$ |  $$ |  $$ |  $$ |      $$ |  $$ |          " << endl;
    cout << "          $$ |     $$$$$$  |\\$$$$$$  |      $$$$$$$  |$$$$$$\\ $$$$$$$$\\ $$$$$$$  |      $$\\ " << endl;
    cout << "          \\__|     \\______/  \\______/       \\_______/ \\______|\\________|\\_______/       \\__|" << endl;
    cout << endl;
    cout << endl;
    cout << "Enter any key to continue : ";
    cin >> a;
}

void page()
{
    system("cls");
    cout << endl
         << endl;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 6);
    cout << "   _____            _             _           " << endl;
    cout << "  / ____|          | |           | |      _   " << endl;
    cout << " | |     ___  _ __ | |_ _ __ ___ | |___  (_)  " << endl;
    cout << " | |    / _ \\| '_ \\| __| '__/ _ \\| / __|      " << endl;
    cout << " | |___| (_) | | | | |_| | | (_) | \\__ \\  _   " << endl;
    cout << "  \\_____\\___/|_| |_|\\__|_|  \\___/|_|___/ (_)  " << endl;
    SetConsoleTextAttribute(h, 15);
    cout << endl
         << endl;
    cout << "        1)To move in right direction use right arrow key." << endl
         << endl;
    cout << "        2)To move in left direction use left arrow key." << endl
         << endl;
    cout << "        3)To move in upward direction use up arrow key." << endl
         << endl;
    cout << "        4)To move in downward direction use down arrow key." << endl
         << endl;
    cout << "        5)To fire the bullets use space bar key." << endl
         << endl;
    cout << "        6)To exit the game use escape key." << endl
         << endl;
    cout << endl;
    h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 6);
    cout << "  _____       _           " << endl;
    cout << " |  __ \\     | |          " << endl;
    cout << " | |__) |   _| | ___  ___   _" << endl;
    cout << " |  _  / | | | |/ _ \\/ __| (_)" << endl;
    cout << " | | \\ \\ |_| | |  __/\\__ \\  _" << endl;
    cout << " |_|  \\_\\__,_|_|\\___||___/ (_)" << endl;
    SetConsoleTextAttribute(h, 15);
    cout << endl
         << endl;
    cout << "         1)When the player collides with the enemies bullet, its health decreases and died when health becomes zero.";
    cout << endl
         << endl;
    cout << "         2)Every bullet hitting the enemies causes increment in the player score and it will won when the score becomes one hundred. " << endl;
    cout << endl;
    cout << "         3)On colliding the player with the enemy causes its ultimately death." << endl;
    cout << endl
         << endl;
    cout << "Enter any to continue : ";
    _getch();
}
