/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on May 4, 2018, 8:21 AM
 * Purpose:  Winning Division
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
double getSales(string);
void findHighest(double, double, double, double);
//Execution Begins Here!
int main(int argc, char** argv)
    {
    double ne, nw, se, sw;//The four divisions
    ne = getSales("Northeast");
    nw = getSales("Northwest");
    se = getSales("Southeast");
    sw = getSales("Southwest");
    findHighest(ne, nw, se, sw);
    return 0;
    }

    double getSales(string a)
    {
     double Sales;
     do
     {
        cout << "Enter the division sales for " << a << ": ";
        cin >> Sales;
        if (Sales < 0.0)
        {
            cout << "Invalid input! Must be greater than 0";
        }
     }  
        while (!(Sales > 0.00)); 
        return Sales;     
    }
    
    void findHighest(double ne, double nw, double se, double sw)
    {
      double Highest;
      cout << fixed << showpoint << setprecision(2);
      if (ne > nw && ne > se && ne > sw)
      {
          Highest = ne;
          cout << "The highest grossing division is the Northeast with $" << Highest;
      }
      else if (nw > ne && nw > se && nw > sw)
      {
          Highest = nw;
          cout << "The highest grossing division is the Northwest with $" << Highest; 
      }
      else if (se > ne && se > nw && se > sw)
      {
          Highest = se;
          cout << "The highest grossing division is the Southeast with $" << Highest; 
      }
      else
      {
          Highest = sw;
          cout << "The highest grossing division is the Southwest with $" << Highest; 
      }
      
    }