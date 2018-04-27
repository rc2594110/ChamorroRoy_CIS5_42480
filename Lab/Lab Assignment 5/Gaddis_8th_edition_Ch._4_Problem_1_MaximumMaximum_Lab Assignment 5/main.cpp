/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on March 16, 2018, 12:00 PM
 * Purpose:  Minimum/Maximum
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
    int a,//For first number
        b;//For second number
    cout << "Enter two numbers\nThis program will determine which number is ";
    cout << "the smaller and larger of the two\n";
    cin >> a;
    cin >> b;
    (a>b)? cout << a << " is larger than " << b: cout << a << " is smaller than " << b;

    return 0;
     
     
    }
    