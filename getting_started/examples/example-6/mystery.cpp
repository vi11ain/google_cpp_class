// mystery.cpp: ?
// Description: A luxurious showcase of string operations.

#include <iostream>
using namespace std;

int main()
{
    string str1 = "To be or not to be, that is the question";
    string str2 = "only ";
    // assigns str3 with a string of 12 chars starting at str1[6]
    string str3 = str1.substr(6, 12);
    // inserts str2 at str1[32]
    str1.insert(32, str2);
    // first searches for "to be" in str1 (starting from str1[0]), returns index of first char
    // then replaces that 5 char sub-string with the string "to jump"
    str1.replace(str1.find("to be", 0), 5, "to jump");
    // deletes 4 characters off str1 starting at str1[9]
    str1.erase(9, 4);
    cout << str1 << endl;
    // print str3 char by char
    for (int i = 0; i < str3.length(); i++)
        cout << str3[i];
    cout << endl;
}