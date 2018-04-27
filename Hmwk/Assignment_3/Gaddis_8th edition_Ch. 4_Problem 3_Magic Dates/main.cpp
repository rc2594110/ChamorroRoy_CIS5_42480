/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on March 16, 2018, 7:32 PM
 * Purpose:  Magic Dates
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
    int a, b, c, d;
    cout << "Enter a month in numeric form ";
    cin >> a;
    cout << "Enter a day in numeric form ";
    cin >> b;
    cout << "Enter a year in 2 digit numeric form\n";
    cout << "e.g. 6/6/97\n";
    cin >> c;
    d = a + b;
    (d == c)? cout << "The date you entered is a Magic Date!!":
    cout << "The date you entered is not a magic date :(";
     
    return 0; 
    }
    