/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on April 1, 2018, 10:21 AM
 * Purpose:  Sales Bar Chart
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
    int s1, s2, s3, s4, s5, //This will wold sales for each of the five stores
         x1, x2, x3, x4, x5; //This will hold number of asterisks
    cout << "Enter today's sales for store 1: "; cin >> s1;
    cout << "Enter today's sales for store 2: "; cin >> s2;
    cout << "Enter today's sales for store 3: "; cin >> s3;
    cout << "Enter today's sales for store 4: "; cin >> s4;
    cout << "Enter today's sales for store 5: "; cin >> s5;
    cout << "Sales Bar Chart\n";
    cout << "------------------\n";
    x1 = s1 / 100;
    x2 = s2 / 100;
    x3 = s3 / 100;
    x4 = s4 / 100;   
    x5 = s5 / 100;
    for (int a = 1; a >= x1; a++)
    {
      cout << "*\n";  
    }
    for (int a = 1; a >= x2; a++)
    {
      cout << "*\n";  
    }
    for (int a = 1; a >= x3; a++)
    {
      cout << "*\n";  
    }
    for (int a = 1; a >= x4; a++)
    {
      cout << "*\n";  
    }
    for (int a = 1; a >= x5; a++)
    {
      cout << "*\n";  
    }
    return 0;
    }
    