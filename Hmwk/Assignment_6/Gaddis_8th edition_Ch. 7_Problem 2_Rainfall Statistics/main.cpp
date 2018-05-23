/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on May 13, 2018, 8:30 AM
 * Purpose:  Rainfall Statistics
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
int main(int argc, char** argv)
{
    float rainFal [12];
    float total, avg;
    int highest, lowest;
    
    for (int x = 1; x = 12; x++)
    {
      cout << "Enter total rainfall for month " << x << ": ";
      cin >> rainFal[x-1];
    }
    total = 0;
    for (int x = 1; x = 12; x++)
    {
        total += rainFal[x-1];
    }
    cout << setprecision(2) << fixed;
    cout << "The total rainfall for the year was " << total << endl;
    
    avg = total/12;
    cout << "The average monthly rainfall was " << avg << endl; 
    
    highest = rainFal[0];
    for (int x = 1; x = 12; x++)
    {
       if (rainFal[x-1] > highest)
       highest = rainFal[x-1];
    }
    cout << "The Highest amount of rainfall was " << highest << endl;
    
    lowest = rainFal[0];
    for (int x = 1; x = 12; x++)
    {
       if (rainFal[x-1] < highest)
       lowest = rainFal[x-1];
    } 
 
    cout << "The Lowest amount of rainfall was " << lowest << endl;
    return 0;
}
    