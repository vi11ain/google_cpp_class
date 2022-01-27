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

int recursive_gcd(int a, int b)
{
    if (a == 0)
        return b;

    if (b == 0)
        return a;

    return recursive_gcd(b, a % b);
}

int main()
{
    cout << "non recursive gcd:" << endl
         << "4, 12: " << non_recursive_gcd(4, 12) << endl
         << "6, 40: " << non_recursive_gcd(6, 40) << endl
         << "8, 37: " << non_recursive_gcd(8, 37) << endl << endl;

    cout << "recursive gcd:" << endl
         << "4, 12: " << recursive_gcd(4, 12) << endl
         << "6, 40: " << recursive_gcd(6, 40) << endl
         << "8, 37: " << recursive_gcd(8, 37) << endl;

    return 0;
}