 /* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on February 28, 2018, 4:16 PM
 * Purpose:  Total Purchase
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv)
    {
    float bal, //This will hold the balance
         aint, //Annual interest rate
        month, //Number of months since account was established
          dep, //Will hold deposits
         with, //Withdrawals
         mint, //Monthly interest
       totint; //Total interest
    cout << "Enter your annual interest rate: ";
    cin >> aint;
    cout << "Enter your current balance: ";
    cin >> bal;
    cout << "Enter the number of months since account was established: ";
    cin >> month;
    mint = aint / 12;
    for (int x = 1; x <= month; x++)
    {
      cout << "Enter amount deposited month " << x << ": ";
      cin >> dep;
      bal += dep;
      cout << "Enter amount withdrawn month " << x << ": ";
      cin >> with;
      bal -= with;
      
      if (bal < 0)
      {
          cout << "Your account has been terminated due to negative balance.";
          break;
      }  
    }
    totint = (mint * bal);
    bal += totint;
    cout << "Your final account balance is $" << setprecision(2) << fixed << bal << endl;
    cout << "Total deposits: $" << setprecision(2) << fixed << dep << endl;
    cout << "Total withdrawals: $" << setprecision(2) << fixed << with << endl;
    cout << "Total interest earned: $" << setprecision(2) << fixed << totint << endl;
    return 0; 
    }
    