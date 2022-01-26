// guessing_game.cpp: Yuval Gal
// Description: A game of guessing the correct number.

#include <iostream>
#include <chrono>
#include <random>

using namespace std;

int main()
{
    int guess = 0;
    // create seed based on time
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    // create generator with seed
    default_random_engine generator(seed);
    // create random number distribution of 1 to 99
    uniform_int_distribution<int> distribution(1, 99);
    // generate random secret number
    int secret = distribution(generator);

    cout << "A secret number between 1 and 100 was chosen..." << endl;

    cout << "Enter your guess: ";
    if (!(cin >> guess))
    {
        cout << "Invalid input!" << endl;
    }
    else
    {
        if (guess < secret)
        {
            cout << "Secret is bigger than " << guess << endl;
        }
        else if (guess > secret)
        {
            cout << "Secret is smaller than " << guess << endl;
        }
        else
        {
            cout << "Congratz! You guessed correctly!" << endl;
        }
    }

    return 0;
}