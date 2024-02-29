#include <iostream>
using namespace std;

char maze[3][5];

void calculate()
{
    int playerIndex;
    int stairIndex;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (maze[i][j] == '2')
            {
                playerIndex = j;
            }
            if (maze[i][j] == '1')
            {
                stairIndex = j;
                maze[i + 1][j] = '2';
            }
        }
        if (playerIndex > stairIndex)
        {
            cout << "left: " << playerIndex - stairIndex << endl;
        }
        else if (playerIndex < stairIndex)
        {
            cout << "right: " << stairIndex - playerIndex << endl;
        }
        if (i != 2)
        {
            cout << "Down: 1" << endl;
        }
    }
}

main()
{
    cout <<"Please enter the structure: \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> maze[i][j];
        }
    }
    calculate();
}