// file.cpp, Maggie Johnson
// Description: An illustration of file processing
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    char first_name[30], last_name[30];
    int age;
    char file_name[20];
    // Collect the data.
    cout << "Enter First Name: ";
    cin >> first_name;
    cout << "Enter Last Name: ";
    cin >> last_name;
    cout << "Enter Age: ";
    cin >> age;
    cout << endl
         << "Enter the name of the file: ";
    cin >> file_name;

    // Create an ofstream called People, open the stream for output.
    ofstream People(file_name, ios::out);
    // Write the output to the stream.
    People << first_name << endl
           << last_name << endl
           << age << endl;
    // Close stream
    People.close();

    // Create an ifstream called PeopleRead, open the stream for input.
    ifstream PeopleRead(file_name, ios::in);
    // Read the input from the stream.
    PeopleRead >> first_name >> last_name >> age;
    // Close stream
    PeopleRead.close();

    cout << first_name << endl
         << last_name << endl
         << age << endl;

    return 0;
}