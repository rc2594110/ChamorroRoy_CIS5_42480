/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on May 5, 2018, 11:16 AM
 * Purpose:  Future Value
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
float futureValue (float, float, int);
//Execution Begins Here!
int main(int argc, char** argv)
    {
    float F,//Future Value
          P,//Present value
          i;//interest rate
    int t; //months
    cout << "Enter Present value of account, interest rate and number of months: ";
    cin >> P >> i >> t;
    F = futureValue (P, i, t);
    cout << setprecision(2) << fixed;
    cout << "The Future Value of the account is $" << F;
    return 0;
    }
//This function will do all the calculating for the future value of the account
float futureValue (float P, float i, int t)
{
    float F = P * pow((1 + i), t);
    return F;
}
    