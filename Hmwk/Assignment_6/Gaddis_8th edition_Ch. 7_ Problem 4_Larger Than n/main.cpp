/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on May 13, 2018, 10:31 AM
 * Purpose:  Larger than n
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
    int x, n;
    cout << "How many elements should the array have? ";
    cin >> x;
    int y[x];
    for (int c = 0; c < x; c++)
    {
        cout << "Enter an element for the array: ";
        cin >> y[c];
    }
    cout << "Enter any number: ";
    cin >> n;
    for (int b = 0; b < x; b++)
    {
        if (y[b] > n)
        {
            cout << y[b] << " is greater than " << n << endl;
        }
    }
    return 0; 
}
    