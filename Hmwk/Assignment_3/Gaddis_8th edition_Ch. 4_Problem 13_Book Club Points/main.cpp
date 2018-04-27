/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on March 18, 2018, 5:37 PM
 * Purpose:  Total Purchase
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv)
    {
    int x; 
    cout << "Enter the number of books you have bought this month through Serendipity ";
    cout << "Booksellers: ";
    cin >> x;
    switch (x)
    {
            case 0: cout << "You have earned 0 points!"; break;
            case 1: cout << "You have earned 5 points!"; break;
            case 2: cout << "You have earned 15 points!"; break;
            case 3: cout << "You have earned 30 points!"; break;
            case 'x>=4': cout << "You have earned 60 points!"; 
            break; //I do not know why this case will fall through
            default: cout << "Invalid input!"; break;            
    }
     return 0; 
    }
    