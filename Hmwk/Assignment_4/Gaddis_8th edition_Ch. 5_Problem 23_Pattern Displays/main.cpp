/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on April 1, 2018, 308 PM
 * Purpose:  Pattern displays
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
    for (int a = 0; a <= 10; a++)
    {
        for (int b = 0; b <= a; b++)
        {
            cout << "+";
        }
        cout << endl;
    }
    for (int a = 10; a >= 1 ; a--)
    {
        for (int b = 0; b <= a; b++)
        {
            cout << "+";
        }
        cout << endl;
    }
     
    return 0; 
    }
    