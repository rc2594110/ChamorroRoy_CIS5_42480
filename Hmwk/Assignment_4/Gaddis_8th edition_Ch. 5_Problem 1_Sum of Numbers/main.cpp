/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on March 29, 2018, 6:33 PM
 * Purpose:  Sum of Numbers
 * This program will ask for a number from the user and add up all real 
 * numbers up to that one.
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
      int num, // This will hold the user's choice
            x; // This will hold the count of all numbers
          
      cout << "Enter a positive integer: ";
      cin >> num;
      
      if ( num < 1)
              cout << "Invalid input";
      else 
          {
          int sum = 0; // This will hold the sum of all numbers
             for (x = 0; x <= num ; x++)
             {    
                 sum += x;
             }
             cout << "The sum of every number up to your choice is " << sum << endl;
          }
     
      return 0;
    }
    