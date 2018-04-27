/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on March 17, 2018, 10:28 AM
 * Purpose:  Mass and Weight
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
    double mass, weight;
    cout << "Enter an object's mass: ";
    cin >> mass;
    weight = mass * 9.8;
    if (weight > 1000)
        cout << "The object is too heavy!\n";
    else if (weight < 10)
        cout << "The object is too light!\n";
    else
        cout << "The object's weight in Newtons is " << weight;
            
   
          
                    
    return 0; 
     
    }
    