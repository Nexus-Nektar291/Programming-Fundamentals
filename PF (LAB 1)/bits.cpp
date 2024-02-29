#include <iostream>
using namespace std;
int main()
{
    int mb;
    cout << "Enter number of MBs: ";
    cin >> mb;
    int bits;
    // 1MB = 8000000bits
    bits = 8000000 * mb;
    cout << "Total number of bits in " << mb << " MBs is = " << bits;
    return 0;
}