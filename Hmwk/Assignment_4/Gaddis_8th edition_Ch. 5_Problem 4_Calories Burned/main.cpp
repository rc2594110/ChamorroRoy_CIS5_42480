/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on March 30, 2018, 6:40 AM
 * Purpose:  Calories Burned (on a treadmill at different variables of time)
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
    const float cal = 3.6; //This is how many calories are burned per minute
    float x; //This will be multiplied to get totals at different times
    
    cout << "This program is to calculate the number of calories burned on a";
    cout << "on a particular treadmill.\n";
    
    for ( x=5.0; x <= 30.0; x +=5)
    {
        cout << "After " << x << " minutes on the treadmill, you will have burned ";
        cout << (cal * x) << " calories.\n";     
    }
     
    return 0;
    }
    