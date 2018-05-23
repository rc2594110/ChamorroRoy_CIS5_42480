/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on May 22, 2018, 9:30 AM
 * Purpose:  Rainfall Statistics Mod
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
void sortArray(int [], int);
//Execution Begins Here!
int main(int argc, char** argv)
{
    float rainFal [12];
    float total, avg;
    int highest, lowest;
    
    for (int x = 1; x = 12; x++)
    {
      cout << "Enter total rainfall for month " << x << ": ";
      cin >> rainFal[x-1];
    }
    total = 0;
    for (int x = 1; x = 12; x++)
    {
        total += rainFal[x-1];
    }
    cout << setprecision(2) << fixed;
    cout << "The total rainfall for the year was " << total << endl;
    
    avg = total/12;
    cout << "The average monthly rainfall was " << avg << endl; 
    
    sortArray(rainFal, 12);
    cout << "\tMonth\t\tAmount of Rain\n";
    cout << "\t**************************\n";
    for (int count = 0; count < 12; count++)
    {
        cout << "\t" << count << "\t\t" << rainFal[count];
    }
    return 0;
}

//***********************************************
//This function will sort through the values*****
//in the rainFal array***************************
//***********************************************
    
void sortArray(int list[], int x)
{
    bool swap;
    int y;
    do
    {
        swap = false;
        for (int a = 0; a < (x-1); a++)
        {
            if (list[a] > list[a + 1])
            {
                y = list[a];
                list[a] = list[a + 1];
                list[a + 1] = y;
                swap = true;
            }
        }
    }
    while (swap);
}