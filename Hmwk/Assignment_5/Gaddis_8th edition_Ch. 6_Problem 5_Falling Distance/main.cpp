/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on May 4, 2018, 2:16 PM
 * Purpose:  Falling Distance
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
#include <cmath>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
float fallingDistance(int);
//Execution Begins Here!
int main(int argc, char** argv)
    {
    int x = 1;
    //This program will run through values in seconds and show the distance they have fallen
    cout << "\t\tTime Passed (in sec)\t\tDistance Fallen (in meters)\n";
    cout << "\t\t***********************************************************\n";
    fallingDistance(x); 
    return 0; 
    }
//This function will do all the calculating with the formula
float fallingDistance(int x)
{
    for (x; x <= 10; x++)
    {
        float d = ((0.5) * (9.8) * (pow(x, 2)));
        cout << "\t\t" << x << "\t\t\t\t" << d <<"\n";        
    }
    return 0;
}
    