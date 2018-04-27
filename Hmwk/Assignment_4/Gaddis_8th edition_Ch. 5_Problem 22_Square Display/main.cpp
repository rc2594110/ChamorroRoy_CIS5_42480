/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on March 31, 2018, 12:34 PM
 * Purpose:  Square Display
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
    int x; //User's choice
    cout << "Enter a whole number no bigger than 15: ";
    cin >> x;
    
    for (int c = 1; c <= x; c++) //rows
    {
        for (int a = 1; a <= x; a++)//columns
        {cout << "x"; } 
        cout << endl;
    }
    return 0;
    }
    