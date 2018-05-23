/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on March 11, 2018, 10:04 AM
 * Purpose:  Math Tutor
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cstdlib> // For rand and srand
#include <iomanip>
#include <ctime>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
int coinToss (int);
//Execution Begins Here!
int main(int argc, char** argv)
    { 
    int coin;
    cout << "How many coin tosses do you want? ";
    cin >> coin;
        for (int x = 1; x <= coin; x++)
        {
            coinToss(x);
        }
    return 0;
     
    }
    int coinToss (int a)
    {
       const int MIN_VALUE = 1;
       const int MAX_VALUE = 2;
       unsigned seed = time(0);
       srand(seed);
       a = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
       if (a == 1)
            {
                cout << "Toss is HEADS!\n";
            }
       if (a == 2)
            {
                cout << "Toss is TAILS!\n";
            }
       return 0;
    }