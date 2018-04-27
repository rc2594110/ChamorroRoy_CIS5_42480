/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on March 31, 2018, 11:09 AM
 * Purpose:  Ocean Levels
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
    float m = 1.5; //The amount of millimeters the ocean rises each year
    float a = 0.0; //Will hold totals 
    cout << "# of Years\tRise in mm\n";
    cout << "--------------------------\n";
    for (int x = 0; x <= 25; x++)
    {
        
        a += m;
        cout << x << "\t\t" << a << "\n";
    }
    return 0;
     
    }
    