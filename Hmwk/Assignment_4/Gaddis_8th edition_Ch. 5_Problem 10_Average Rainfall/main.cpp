/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on March 31, 2018, 1:56 PM
 * Purpose:  Average Rainfall
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
    int years, 
         rain, //This will hold the inches of rainfall monthly
        total, //Will hold total
        month; //Will hold number of months
    
    cout << "How many years are we calculating the average rainfall for? ";
    cin >> years;
    month = years * 12;
    while (years < 1)
    {
        cout << "Invalid input. Try again: ";
        cin >> years;
    }
    for (int x = 1; x <= years ; x++)
    {
        for (int r = 1; r <= month; r++)
        {
            cout << "Enter rainfall (in inches) for month " << r << " of year ";
            cout << x << ": ";
            cin >> rain;
            while (rain < 0)
            {
                cout << "Invalid input. Try again: ";
                cin >> rain;
            }
            total += rain;
        }
    }
    cout << "Number of months: " << month << "\n";
    cout << "Total inches of rainfall: " << setprecision (2) << fixed << total << "\n";
    cout << "Average monthly inches of rainfall: " << setprecision (2) << fixed << total / month << "\n";
    return 0; 
    }
    