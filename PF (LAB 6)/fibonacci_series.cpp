#include <iostream>
using namespace std;

void printFibonacci(int n) {
    int first = 0, second = 1, next;

    cout << "Fibonacci Series up to " << n << " terms: ";

    for (int i = 1; i <= n; ++i) 
    {
        if (i == 1) 
        {
            cout << first << " ";
            continue;
        }
        if (i == 2) {
            cout << second << " ";
            continue;
        }
        next = first + second;
        first = second;
        second = next;

       cout << next << " ";
    }
}

int main() 
{
    int n;

    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> n;
    
    printFibonacci(n);

    return 0;
}

