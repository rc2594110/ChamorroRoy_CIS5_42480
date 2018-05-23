/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on MAy 6, 2018, 1:46 PM
 * Purpose:  Days Out
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
int numEmp(int);
int numDay(int);
float avg(int, int);
//Execution Begins Here!
int main(int argc, char** argv)
    {
    int x,y;
    double z;
    cout << "This program will calculate the the average number of days employees";
    cout << " are absent.\n";
    x = numEmp(x);
    y = numDay(y); 
    z = avg( x, y);
    cout << "The average number absences is " << z;
    return 0;
    }
    
//this function will ask user for number of employees
int numEmp(int x)
{
    cout << "Enter the number of employees: ";
    cin >> x;
    if (x < 1)
    {
        cout << "Invalid input. Enter value of 1 or greater than one ";
        cin >> x;
    }
    return x;
}

//this function will ask for number of days absent
int numDay(int y)
{
    cout << "Enter the number of absent days: ";
    cin >> y;
     if (y < 0)
    {
        cout << "Invalid input. Enter value of 0 or greater than 0 ";
        cin >> y;
    }
    return y;
}

//this function will average the two inputs 
float avg(int x, int y)
{
    float avg = y/x;
    return avg;
}