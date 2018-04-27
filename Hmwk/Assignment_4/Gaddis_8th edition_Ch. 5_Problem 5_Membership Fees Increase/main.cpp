/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on March 31, 2018, 9:44 PM
 * Purpose:  Membership Fees Increase
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
    float fee = 2500; //This the basic fee which will be increased in the loop
    const float perc = 0.04; //this 4% increase every year
    cout << "The next six years the country club will annually increase ";
    cout << "membership fees by 4 percent\n";
    cout << "It currently is $2500.\n";
    for (int x =1; x <=6; x++)
    {
        const float inc = (fee * perc); 
        fee += inc;
        cout << "Then it will be $" << fee << ".\n";
    }
    return 0; 
     
    }
    