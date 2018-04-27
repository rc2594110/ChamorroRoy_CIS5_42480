/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on March 11, 2018, 8:23 PM
 * Purpose:  Time Calculator
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
    float a, b, c;
   
    cout << "Enter any number of of seconds\n";
    cin >> a; 
    if (a < 60)
        cout << "That is just " << a << " seconds.\n";
    else if (a >= 86400)
    {b = a / 86400;
    cout << "That is equal to " << b << " days. \n";
    }
    else if (a >= 3600)
    {b = a / 3600;
    cout << "That is equal to " << b << " hour(s).\n";
    }
    else if (a >= 60)
    {b  = (a / 60);
        cout << "That is equal to " << b << " minutes\n";
    }
    
    return 0; 
    }
    