// gcd.cpp: Yuval Gal
// Description: A function to calculate the greatest common divisor of two integers

#include <iostream>

using namespace std;

int non_recursive_gcd(int a, int b)
{
    do
    {
        if (a == 0)
            return b;

        if (b == 0)
            return a;

        int r = a % b;

        a = b;
        b = r;
    } while (true);
}

int main()
{
    cout << non_recursive_gcd(4, 12) << endl
         << non_recursive_gcd(6, 40) << endl
         << non_recursive_gcd(8, 37) << endl;

    return 0;
}