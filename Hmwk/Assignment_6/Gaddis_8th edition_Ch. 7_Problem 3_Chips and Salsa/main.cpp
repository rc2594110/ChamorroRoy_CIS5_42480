/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on May 12, 2018, 4:16 PM
 * Purpose:  Chips and Salsa
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
    int l,h, total;
    string salsa[5] = {"mild", "medium", "sweet", "hot", "zesty"};
    int sales[5];
    for (int x = 0; x < 5; x++)
    {
        cout << "How many jars of " << salsa[x] << " salsa were sold?";
        cin >> sales[x];
        if (sales[x] < 0)
        {
            cout << "Invalid input! Enter a nonnegative number";
            cin >> sales[x];
        }
    }
    for (int x = 0; x < 5; x++)
    {
        cout << <<"The " << salsa[x] <<" salsa sold " << sales[x] << " jars.\n";
    }
    total = 0;
    for (int x = 0; x < 5; x++)
    {
        total += sales[x];
    }
    cout << "A total of " << total << " jars were sold. \n";
    h = sales[0];
    for (int x = 1; x < 5; x++)
    {
        if (sales[x] > h)
        {
            h = sales[x];
        }
    }
    cout << "The highest number of jars sold was " << h << endl;
    l = sales[0];
    for (int x = 1; x < 5; x++)
    {
        if (sales[x] < l)
        {
            h = sales[x];
        }
    }
    cout << "The lowest number of jars sold was " << l << endl;
    return 0;
}   