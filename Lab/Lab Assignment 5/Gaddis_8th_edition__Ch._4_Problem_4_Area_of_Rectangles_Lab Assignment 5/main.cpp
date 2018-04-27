/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on March 27, 2018, 10:53 AM
 * Purpose: To review, check and improve coding of Area of Rectangles
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
    int L1, W1, L2, W2, a1, a2; //L's for length, W's for width, a's for area
    cout << "Enter the length and width of two rectangles\n";
    cout << "Rectangle 1 length: ";
    cin >> L1;
    cout << "Rectangle 1 width: ";
    cin >> W1;
    cout << "Rectangle 2 length: ";
    cin >> L2;
    cout << "Rectangle 2 width: ";
    cin >> W2;
    a1 = L1 * W1;
    a2 = L2 * W2;
    if (a1 > a2)
        cout << "The area of Rectangle 1 is greater than that of Rectangle 2.\n";
    else if (a1 < a2)
        cout << "The area of Rectangle 2 is greater than that of Rectangle 1.\n";
    else 
        cout << "Both rectangles share the same area.";

    return 0;
    }
    