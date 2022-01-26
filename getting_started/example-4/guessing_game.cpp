// guessing_game.cpp: Yuval Gal
// Description: A game of guessing the correct number.

#include <iostream>
#include <chrono>
#include <random>

using namespace std;

int main()
{
    // create seed based on time
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    // create generator with seed
    default_random_engine generator(seed);
    // create random number distribution of 1 to 99
    uniform_int_distribution<int> distribution(1, 99);

    // generate random secret number
    int secret_number = distribution(generator);

    cout << secret_number << endl;

    return 0;
}