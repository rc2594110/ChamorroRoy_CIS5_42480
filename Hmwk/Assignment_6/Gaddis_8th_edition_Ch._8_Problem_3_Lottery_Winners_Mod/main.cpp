/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on May 22, 2018, 9:16 AM
 * Purpose:  Lottery Winners Modification
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
int search(const int[], int, int);
//Execution Begins Here!
int main(int argc, char** argv)
{
    int num[] = {13579, 26791, 26792, 33445, 55555, 
                 62483, 77777, 79422, 85647, 93121}; 
    int x,//User input for winning number
        y;
    cout << "Enter winning number: ";
    cin >> x;
    y = search(num, 10, x);
    if (y == -1)
    {
        cout << "Sorry, no winners! :(";
    }
    else 
    {
        cout << "Congrats!\nOne winning number found! ";
        cout << num[y] << " was a winner!";
    }
    return 0;
}

//*******************************************
//This function will perform a linear search* 
//through the array to find a match.*********
//If a match is found it will return a ******
//positive value, and the opposite if one ***
//found**************************************

int search (const int list, int numElem, int userIn)
{
    int first = 0,
        last = numElem -1,
        middle, 
        pos = -1;    
    bool found = false;
    while (!found && first <= last)
    {
        middle = (first + last) / 2;
        if (list[middle] == userIn)
        {
            found = true;
            pos = middle;
        }
        else if (list[middle] > userIn)
        {
            last = middle - 1;
        }
        else 
        {
            first = middle + 1;
        }
    }
    return pos;
}