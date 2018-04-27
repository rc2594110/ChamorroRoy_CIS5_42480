/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on March 31, 2018, 12:06 PM
 * Purpose:  Distance Traveled
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
    int speed, //Will hold the speed the user enters
          hrs, //Will hold the number of hours the user enters
         dist; //Will hold the total distance traveled
    cout << "This program will show you the amount time traveled at 1 hr intervals\n";
    cout << "What was your is speed in mph? ";
    cin >> speed; 
    cout << "How long were you driving (in hours)? ";
    cin >> hrs;
    cout << "Hour \t Distance (miles)\n";
    cout << "---------------------------\n";
    for (int x = 0; x <= hrs; x++)
    {
     dist = x * speed;
     cout << x << "\t\t" << dist << endl;
             
    }
    
    
   return 0;  
    }
    