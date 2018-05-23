/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on MAy 15, 2018, 11:46 AM
 * Purpose:  Monkey Business
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv)
{
    int mnkys[3][5]; 
    float total, avg, high, low;
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            cout << "Enter the amount of pounds of food eaten by monkey " << (x+1);
            cout << " in day " << (y+1);
            cin >> mnkys[x][y];
        }
    }
    total = 0;
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            total += mnkys[x][y];  
        }
    }
    avg = total/5;
    cout << setprecision(2) << fixed;
    cout << "The average pounds for the whole family of monkeys is " << avg;
    high = mnkys[0][0];
    for (int b = 1; b < 5; b++)
    {
        if (mnkys[1][b] > high)
        {
            high = mnkys[1][b];
        }
        cout << "The most monkey 1 ate was " << high << " lbs.";
    } 
    for (int b = 1; b < 5; b++)
    {
        if (mnkys[2][b] > high)
        {
            high = mnkys[2][b];
        }
        cout << "The most monkey 2 ate was " << high << " lbs.";
    }
    for (int b = 1; b < 5; b++)
    {
        if (mnkys[3][b] > high)
        {
            high = mnkys[3][b];
        }
        cout << "The most monkey 3 ate was " << high << " lbs.";
    }
    low = mnkys[0][0];
    for (int b = 1; b < 5; b++)
    {
        if (mnkys[1][b] < high)
        {
            high = mnkys[1][b];
        }
        cout << "The least monkey 1 ate was " << low << " lbs.";
    } 
    for (int b = 1; b < 5; b++)
    {
        if (mnkys[2][b] < low)
        {
            low = mnkys[2][b];
        }
        cout << "The least monkey 2 ate was " << low << " lbs.";
    }
    for (int b = 1; b < 5; b++)
    {
        if (mnkys[3][b] < low)
        {
            low = mnkys[3][b];
        }
        cout << "The least monkey 3 ate was " << low << " lbs.";
    }
    return 0;
}
    