/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on March 17, 2018, 6:25 PM
 * Purpose:  Personal Best
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
    string name, date1, date2, date3, h1, h2, h3;
    cout << "In this program you will enter a pole vaulter's three best vaults";
    cout << " and when they happened. \n";
    cout << "What is the pole vaulter's name? \n";
    cin >> name;
    cin.ignore();
    cout << "When was this first vault? \n";
    cin >> date1;
    cin.ignore();
    cout << "What was the height in meters?\n";
    getline(cin, h1);
    cin.ignore();
    cout << "When was the second vault? \n";
    getline(cin, date2);
    cin.ignore();
    cout << "What was the height in meters?\n";
    getline(cin, h2);
    cin.ignore();
    cout << "When was the third vault? \n";
    getline(cin, date3);
    cin.ignore();
    cout << "What was the height in meters?\n";
    getline(cin, h3);;
    cin.ignore();
    
    if ( h1 || h2 || h3 < 2)
        cout << "Invalid input height values need to be between 2 and 5.";
    else if ( h1 || h2 || h3 > 5)
        cout << "Invalid input height values need to be between 2 and 5.";
    else if (h1 > h2)
    {
        if (h2 > h3)
            cout << "From best to worst it is as follows: \n";
            cout << date1 << ": " << h1 << " meters\n";
            cout << date2 << ": " << h2 << " meters\n";
            cout << date3 << ": " << h3 << " meters\n";
    }
    else if (h1 > h2)
    {
        if (h2 < h3)
            cout << "From best to worst it is as follows: \n";
            cout << date1 << ": " << h1 << " meters\n";
            cout << date3 << ": " << h3 << " meters\n";
            cout << date2 << ": " << h2 << " meters\n";
    }
    else if (h2 > h3)
    {
        if (h3 > h1)
            cout << "From best to worst it is as follows: \n";
            cout << date2 << ": " << h2 << " meters\n";
            cout << date3 << ": " << h3 << " meters\n";
            cout << date1 << ": " << h1 << " meters\n";
    }
    else if (h2 > h3)
    {
        if (h3 < h1)
            cout << "From best to worst it is as follows: \n";
            cout << date2 << ": " << h2 << " meters\n";
            cout << date1 << ": " << h1 << " meters\n";
            cout << date3 << ": " << h3 << " meters\n";
    }
    else if (h3 > h1)
    {
        if (h1 > h2)
            cout << "From best to worst it is as follows: \n";
            cout << date3 << ": " << h3 << " meters\n";
            cout << date1 << ": " << h1 << " meters\n";
            cout << date2 << ": " << h2 << " meters\n";
    }
    else if (h3 > h1)
    {
        if (h2 > h1)
            cout << "From best to worst it is as follows: \n";
            cout << date3 << ": " << h3 << " meters\n";
            cout << date2 << ": " << h2 << " meters\n";
            cout << date1 << ": " << h1 << " meters\n";
    }
    return 0;
    }
    