/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on May 15, 2018, 10:36 AM
 * Purpose:  Lo Shu Magic Squares
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
    int loShusq[3][3];
    int x = 0;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
           cout << "Enter value for row " << (row + 1);
           cout << " and column " << (col + 1);
           cin >> loShusq[row][col];
        }
        cout << endl;
    } 
    if (loShusq[x][x]+loShusq[x][x+1]+loShusq[x][x+2] == loShusq[x+1][x]+loShusq[x+1][x+1]+loShusq[x+1][x+2])
    {
        if (loShusq[x][x]+loShusq[x][x+1]+loShusq[x][x+2] == loShusq[x+2][x]+loShusq[x+2][x+1]+loShusq[x+2][x+2])
        {
            if (loShusq[x][x]+loShusq[x][x+1]+loShusq[x][x+2] == loShusq[x+1][x]+loShusq[x+2][x]+loShusq[x][x])
            {
                if (loShusq[x][x]+loShusq[x][x+1]+loShusq[x][x+2] == loShusq[x][x+1]+loShusq[x+1][x+1]+loShusq[x+2][x+1])
                {
                    if (loShusq[x][x]+loShusq[x][x+1]+loShusq[x][x+2] == loShusq[x][x+2]+loShusq[x+1][x+2]+loShusq[x+2][x+2])
                    {
                        cout << "It is a Lo Shu Magic Square!!";
                    }
                }
            }
        }
    }
    else 
    {
        cout << "Not a Lo Shu Magic Square :(";
    }
    return 0;
}
    