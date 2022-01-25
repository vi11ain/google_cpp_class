// mystery.cpp: ?
// Description: Print a 9x9 multiplication table.

#include <iostream>
using namespace std;

int main()
{
    // print horizontal header
    cout << " 1\t2\t3\t4\t5\t6\t7\t8\t9" << endl
         << "" << endl;
    for (int c = 1; c < 10; c++)
    {
        // print vertical header
        cout << c << "| ";
        for (int i = 1; i < 10; i++)
        {
            // print multiplication
            cout << i * c << '\t';
        }
        // end line after vertical header + muliplications on line
        cout << endl;
    }
    return 0;
}