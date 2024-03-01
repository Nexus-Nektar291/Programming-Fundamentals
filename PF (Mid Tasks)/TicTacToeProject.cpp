#include <iostream>
//#include <windows.h>
#include <unistd.h>
using namespace std;

int main()
{
    string ch;
    cout << "Welcome to TicTacToe: \n1: Play\n2: Exit\n";
    cin >> ch;
    system("clear");
    cout << " A B C\n";
    cout << "1      \n";
    cout << "2      \n";
    cout << "3     \n";
    cout << "Player 1(X) Turn: \n";
    cin >> ch;

    system("clear");
    cout << " A B C\n";
    cout << "1X     \n";
    cout << "2      \n";
    cout << "3     \n";
    cout << "Player 2(O) Turn: \n";
    cin >> ch;
    
    system("clear");
    cout << " A B C\n";
    cout << "1X     \n";
    cout << "2  O   \n";
    cout << "3     \n";
    cout << "Player 1(X) Turn: \n";
    cin >> ch;
    
    system("clear");
    cout << " A B C\n";
    cout << "1X     \n";
    cout << "2  O   \n";
    cout << "3    X\n";
    cout << "Player 2(O) Turn: \n";
    cin >> ch;
    
    system("clear");
    cout << " A B C\n";
    cout << "1X     \n";
    cout << "2  O   \n";
    cout << "3O   X\n";
    cout << "Player 1(X) Turn: \n";
    cin >> ch;
    
    system("clear");
    cout << " A B C\n";
    cout << "1X   X\n";
    cout << "2  O   \n";
    cout << "3O   X\n";
    cout << "Player 2(O) Turn: \n";
    cin >> ch;
    
    system("clear");
    cout << " A B C\n";
    cout << "1X   X\n";
    cout << "2  O O \n";
    cout << "3O   X\n";
    cout << "Player 1(X) Turn: \n";
    cin >> ch;
    
    system("clear");
    cout << " A B C\n";
    cout << "1X X X\n";
    cout << "2  O O \n";
    cout << "3O   X\n";
    cout << "Player 1(X) wins the game \n";
    cin >> ch;
    
    system("clear");
    cout << "Welcome to TicTacToe: \n1: Play\n2: Exit\n";
    cin >> ch;
    
    return 0;
}
