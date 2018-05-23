/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on May 12, 2018, 5:16 PM
 * Purpose:  Largest/Smallest Array Values
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
    int num[10];
    int highest, lowest;
    for (int x = 0; x < 10; x++)
    {
        cout << "Enter a number: ";
        cin >> num[x];
    }
    highest = num[0];
    for (int count = 1; count < 10; count++)
    {
       if (num[count] > highest)
       highest = num[count];
    }
    lowest = num[0];
    for (int count = 1; count < 10; count++)
    {
       if (num[count] < lowest)
       lowest = num[count];
    }
    cout << "The highest number is " << highest << endl;
    cout << "The lowest number is " << lowest << endl;
    
    return 0;
    }
    