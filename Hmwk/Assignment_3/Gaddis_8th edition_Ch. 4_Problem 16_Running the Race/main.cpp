/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on March 17, 2018, 12:24 PM
 * Purpose:  Running the Race
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <string>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv)
    {
    string r1, r2, r3;
    int t1, t2, t3;
    cout << "Enter the name and time of three racers. \n"; 
    cout << "First racer's name: ";
    cin >> r1;
    cin.ignore();
    cout << "First racer's time in minutes: ";
    cin >> t1;
    cin.ignore();
    cout << "Second racer's name: ";
    cin >> r2;
    cin.ignore();
    cout << "Second racer's time in minutes: ";
    cin >> t2;
    cin.ignore();
    cout << "Third racer's name: ";
    cin >> r3;
    cin.ignore();
    cout << "Third racer's time in minutes: ";
    cin >> t3;
    cin.ignore();
    
    if (t1 < t2)
    {
        if (t2 < t3)
            cout << "The racers came in this order " << r1 << ", " << r2;
            cout << " and finally " << r3;
    }
    else if (t1 < t2)
    {
        if (t2 > t3)
            cout << "The racers came in this order " << r1 << ", " << r3;
            cout << "and finally " << r2;
    }
    else if (t1 > t2)
    {
        if (t1 < t3)
            cout << "The racers came in this order " << r2 << ", " << r1;
            cout << "and finally " << r3;
    }
    else if (t1 > t2)
    {
        if (t1 > t3)
            cout << "The racers came in this order " << r2 << ", " << r3;
            cout << "and finally " << r1;
    }
    else if (t3 < t2)
    {
        if (t2 < t1)
            cout << "The racers came in this order " << r3 << ", " << r2;
            cout << "and finally " << r1;
    }
    else if (t3 < t2)
    {
        if (t2 > t1)
            cout << "The racers came in this order " << r3 << ", " << r1;
            cout << "and finally " << r2;
    }
    else if (t1 || t2 || t3 ,0)
        cout << "Invalid time input!";
    return 0; 
    }
    