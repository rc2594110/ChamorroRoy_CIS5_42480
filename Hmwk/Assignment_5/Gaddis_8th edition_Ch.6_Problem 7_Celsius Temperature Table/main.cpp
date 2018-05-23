/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on May 4, 2018, 2:16 PM
 * Purpose:  Falling Distance
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
double celsius (int);
//Execution Begins Here!
int main(int argc, char** argv)
    {
    int f = 1;
    //This program will run through values in Fahrenheit and show the Celsius equivalent
    cout << "\t\tDegrees in Fahrenheit\t\tDegrees in Celsius\n";
    cout << "\t\t**************************************************\n";
    celsius (f); 
    return 0; 
    }
//This function will do all the calculating with the formula
double celsius (int f)
{
    for (f; f <= 20; f++)
    {
        double c = (5.0 * (f - 32))/9;
        cout << "\t\t" << f << "\t\t\t\t" << c <<"\n";        
    }
    return 0;
}
    