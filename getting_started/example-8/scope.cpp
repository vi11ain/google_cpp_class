// scope.cpp, Maggie Johnson
// Description: A program to illustrate different scopes

#include <iostream>
using namespace std;

int a = 18;
int b = 6;

int function1(int a, int b)
{
    // local variables come before global variables
    return a - b;
}

int function2()
{
    int c;
    // global variables
    // c = -6 + 6
    // c = 0
    c = a + b;
    return c;
}

int main()
{
    int b = 12;
    int c = 0;
    // b is local, a is global
    // a = function1(12, 18)
    // a = -6
    // NOTICE global variable a is now changed!
    a = function1(b, a);
    // c = 0
    c = function2();
    // a: -6 b: 12 c: 0
    cout << "a: " << a << " b: " << b << " c: " << c << endl;
}