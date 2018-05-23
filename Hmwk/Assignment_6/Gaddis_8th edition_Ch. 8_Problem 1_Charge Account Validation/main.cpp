/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on May 21, 2018, 5:16 PM
 * Purpose:  Charge Account Validation
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
    int accNum[] = {5658845, 4520125, 7895122, 8777541, 1302850, 8080152,
                    4562555, 5552012, 5050552, 7825877, 1250255, 1005231,
                    6545231, 3852085, 7576651, 7881200, 4581002, 8451277};
    int x, a;
    cout << "Enter your 7-digit account number: ";
    cin >> x;
    a = search(accNum, 18, x);
    if (a == -1)
    {
        cout << "Account not found!";
    }
    else 
    {
        cout << "Account number valid! :)"; 
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
    int y = 0;
    int num = -1;
    bool found = false;
    while (y < numElem && !found)
    {
        if (list [y] == userIn)
        {
            found = true;
            num = y;
        }
        y++;
    }
    return num;
}


    