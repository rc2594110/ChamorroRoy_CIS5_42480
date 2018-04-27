/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on March 18, 2018, 11:30 AM
 * Purpose:  Color Mixer
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
    string p1, p2, s1, s2;
    const string red, yellow, blue;
    cout << "Enter any two different primary colors (red, blue or yellow):\n";
    cin >> p1;
    cin.ignore();
    cin >> p2;
    if (p1 == red)
    {
        if (p2 == red)
            cout << "You entered red twice";
        else if (p2 == yellow)
            cout << "You get ORANGE!";
        else if (p2 == blue)
            cout << "You get PURPLE!";
    }
    else if (p1 == yellow)
    {
        if (p2 == yellow)
            cout << "You entered yellow twice";
        else if (p2 == red)
            cout << "You get ORANGE!";
        else if (p2 == blue)
            cout << "You get GREEN!";
    }
    else if (p1 == blue)
    {
        if (p2 == blue)
            cout << "You entered blue twice";
        else if (p2 == red)
            cout << "You get PURPLE!";
        else if (p2 == yellow)
            cout << "You get GREEN!";
    }
    else 
        cout << "Invalid input";
    
    return 0;
        
     
     
    }
    