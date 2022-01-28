// chirps_to_temperature.cpp: Yuval Gal
// Description: Calculates the current temperature
//              given the number of cricket chirps in a minute.

#include <iostream>
using namespace std;

// Constants
#define kChirpsToTempAddition 40
#define kChirpsToTempDivision 4

// Collects chirps per minute from user input via stdin
int GetInput()
{
    int chirps_per_minute = 0;

    cout << "Number of chirps per minute: ";
    if (!(cin >> chirps_per_minute))
    {
        cout << "Bad input!";
    }

    return chirps_per_minute;
}

// Using chirps to temperature formula, calculate temperature given chirps per minute
float CalculateTemperature(int chirps_per_minute)
{
    return (float)(chirps_per_minute + kChirpsToTempAddition) / kChirpsToTempDivision;
}

int main()
{
    int chirps_per_minute = GetInput();
    float temperature = CalculateTemperature(chirps_per_minute);

    cout << "The temperature is: " << temperature << " degrees.";

    return 0;
}
