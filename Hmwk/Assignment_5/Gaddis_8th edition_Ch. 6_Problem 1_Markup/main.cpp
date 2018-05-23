/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on May 3, 2018, 4:16 PM
 * Purpose:  MArkup
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

//Prototype
float calculateRetail(float, float);

int main(int argc, char** argv)
    {
    float whlsl, //wholesale price
          mrkup; //markup percentage 
    cout << "Enter the wholesale price and markup percentage to get the retail price. ";
    cin >> whlsl >> mrkup;
    calculateRetail(whlsl, mrkup);
    return 0;
    }
//***********************************************************
// This function is to calculate the retail price with the  *
// wholesale price and markup percentage the user enters    *
//***********************************************************  
float calculateRetail(float whlsl, float mrkup)
{
    float rtlpr; //retail price
    mrkup /= 100;
    rtlpr = whlsl + (mrkup * whlsl);
    cout << fixed << showpoint << setprecision(2);//formatting
    cout << "Retail price is $" << rtlpr;
    return rtlpr;
}