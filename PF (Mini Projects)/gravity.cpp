#include <iostream>
#include <windows.h>
using namespace std;

char arr[3][5] =
    {
        {'.', '.', '#', '#', '.'},
        {'.', '#', '.', '#', '.'},
        {'#', '.', '.', '.', '.'}};

void gravityFunction();
void wormhole();

main()
{
    // gravityFunction();
    while (true)
    {
        system("cls");
        wormhole();
        Sleep(1000);
    }
}

void wormhole()
{
    char tempRow[5];
    for (int i = 0; i < 5; i++)
    {
        tempRow[i] = arr[2][i];
        arr[2][i] = '.';
    }
    gravityFunction();
    for (int i = 0; i < 5; i++)
    {
        arr[0][i] = tempRow[i];
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void gravityFunction()
{
    for(int i = 1;i>=0;i--)
    {
        for(int j = 0; j<5;j++)
        {
            if(arr[i][j]=='#')
            {
                if(arr[i+1][j]=='.')
                {
                    arr[i+1][j]='#';
                    arr[i][j]='.';
                }
            }
        }
    }
}