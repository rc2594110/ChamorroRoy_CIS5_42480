/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on March 16, 2018, 4:16 PM
 * Purpose:  Roman Numeral Converter
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
    short a;
    cout << "Enter any number from 1 to 10 and I will convert it to its Roman ";
    cout << "numeral equivalent. \n";
    cin >> a;
    switch (a)
    {
        case 1: cout << "The Roman equivalent of is I.\n";
                break;
        case 2: cout << "The Roman equivalent of is II.\n";
                break;
        case 3: cout << "The Roman equivalent of is III.\n";
                break;
        case 4: cout << "The Roman equivalent of is IV.\n";
                break;
        case 5: cout << "The Roman equivalent of is V.\n";
                break; 
        case 6: cout << "The Roman equivalent of is VI.\n";
                break;
        case 7: cout << "The Roman equivalent of is VII.\n";
                break;
        case 8: cout << "The Roman equivalent of is VIII.\n";
                break;
        case 9: cout << "The Roman equivalent of is IX.\n";
                break;
        case 10: cout << "The Roman equivalent of is X.\n";
               break; 
        default: cout << "That is not a valid entry!\n";
    }
     
    return 0;
     
    }
    