/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on February 28, 2018, 4:16 PM
 * Purpose:  Total Purchase
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
bool isPrime (int);
//Execution Begins Here!
int main(int argc, char** argv)
    {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    if (x == 1 || x == 2 || x == 3)
    {
       cout << "Number entered is prime!"; 
    }
    else if (isPrime(x) == true)
    {
        cout << "Number entered is prime!";
    }
    else if (isPrime(x) == false)
    {
        cout << "Number enter is not prime!";
    }
    return 0;
    }
bool isPrime (int x)
{
    for ( int a = 2; a < x; a++)
    {
        int b = x % a;
        if (b == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}