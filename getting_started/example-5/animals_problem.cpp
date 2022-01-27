// animals_problem.cpp: Yuval Gal
// Description:
// Horses cost $10, pigs cost $3, and rabbits are only $0.50.
// A farmer buys 100 animals for $100, How many of each animal did he buy?

#include <iostream>

using namespace std;

int main()
{
    const float kCostHorse = 10;
    const float kCostPig = 3;
    const float kCostRabbit = 0.5;

    const int kTotalCount = 100;
    const float kTotalCost = 100;

    for (int i = 0; i <= kTotalCount; ++i)
    {
        for (int j = 0; j <= kTotalCount; ++j)
        {
            for (int z = 0; z <= kTotalCount; ++z)
            {
                if ((i + j + z) == kTotalCount)
                {
                    if ((i * kCostHorse) + (j * kCostPig) + (z * kCostRabbit) == kTotalCost)
                    {
                        cout << "Horses: " << i << endl;
                        cout << "Pigs: " << j << endl;
                        cout << "Rabbits: " << z << endl;
                    }
                }
            }
        }
    }

    return 0;
}