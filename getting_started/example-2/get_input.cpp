// get_input.cpp: Yuval Gal
// Description: Illustrate the use of cin to get input, also recovers from errors.

#include <iostream>
using namespace std;

int main()
{
  int input_var = 0;
  // Enter the do while loop and stay there until either
  // a non-numeric is entered, or -1 is entered. Note that
  // cin will accept any integer, 4, 40, 400, etc.
  do
  {
    cout << "Enter a number (-1 = quit): ";
    // The following line accepts input from the keyboard into
    // variable input_var.
    // cin returns false if an input operation fails, that is, if
    // something other than an int (the type of input_var) is entered.
    if (!(cin >> input_var))
    {
      // clear internal error state flags from cin stream
      cin.clear();
      // remove bad characters from stream, 1024 chars or till newline
      cin.ignore(1024, '\n');
      // continue to next loop, take new input
      continue;
    }
    if (input_var != -1)
    {
      cout << "You entered " << input_var << endl;
    }
  } while (input_var != -1);
  cout << "All done." << endl;
  return 0;
}