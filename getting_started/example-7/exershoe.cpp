// exershoe.cpp: Yuval Gal
// Description: Calculates weekly salary given weekly sales with 3 different compensation options:
//              * Straight salary of $600 per week
//              * A salary of $7.00 per hour plus a 10% commission on sales
//              * No salary, but 20% commissions and $20 for each pair of shoes sold

// Includes
#include <iostream>
using namespace std;

// Constants
// method 1
#define kStraightWeeklySalary 600
// method 2
#define kWeeklyWorkHours 40
#define kSalaryPerWorkHour 7
#define kWeeklySalesCommissionMethod2 0.1
// method 3
#define kWeeklySalesCommissionMethod3 0.2
#define kAverageShoePrice 225
#define kPaymentPerShoePairSold 20

// get weekly sales via standard input
float GetInput()
{
    float weekly_sales = 0;

    cout << "Enter weekly sales: $";
    if (!(cin >> weekly_sales))
    {
        cout << "Bad input!" << endl;
        exit(1);
    }

    return weekly_sales;
}

// straight salary
float CalcMethod1()
{
    return kStraightWeeklySalary;
}

// a work hours based salary + commission on weekly sales
float CalcMethod2(float weekly_sales)
{
    return kWeeklyWorkHours * kSalaryPerWorkHour + weekly_sales * kWeeklySalesCommissionMethod2;
}

// commission on weekly sales + payment per shoe pair sold
float CalcMethod3(float weekly_sales)
{
    return kWeeklySalesCommissionMethod3 * weekly_sales + (weekly_sales / kAverageShoePrice) * kPaymentPerShoePairSold;
}

int main()
{
    float weekly_sales = GetInput();

    cout << "Method 1: $" << CalcMethod1() << endl;
    cout << "Method 2: $" << CalcMethod2(weekly_sales) << endl;
    cout << "Method 3: $" << CalcMethod3(weekly_sales) << endl;

    return 0;
}