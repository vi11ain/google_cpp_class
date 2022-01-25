// hello.cpp: Yuval Gal
// Description: a program that prints the immortal saying "hello world" 4 times in 6 lines

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  // set stream alignment flag to left
  cout << setiosflags(ios::left);

  for (int i = 0; i < 6; ++i)
  {
    for (int j = 0; j < 4; ++j)
      // set width of 17 spaces, the minimum number of characters that will be written, filled by spaces for blanks
      cout << setw(17) << "Hello World!";
    // write a newline as part of outer loop
    cout << endl;
  }

  return 0;
}