/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on April 7, 2018, 9:09 AM
 * Purpose:  Lab Assignment 7
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
    int choice;
    // Set up numeric output formatting.
 cout << fixed << showpoint << setprecision(2);
    do
      {
  // Display the menu.
        cout << "\n\t\tChapter 5 Programming Challenges\n\n"
             << "1. Sum of Numbers\n"
             << "2. Ocean Levels\n"
             << "3. Calories Burned\n"
             << "4. Membership Fees Increase\n"
             << "5. Distance Traveled\n"
             << "6. Average Rainfall\n"
             << "7. Savings Account Balance\n"
             << "8. Sales Bar Chart\n"
             << "9. Square Display\n"
             << "10. Pattern Displays\n"
             << "11. Quit Program\n\n"
             << "Enter your choice: ";
         cin >> choice;
         while (choice < 1 || choice > 11)
         {
             cout << "Please enter a valid menu choice: ";
             cin >> choice;
         }
         if (choice != 11)
         {
          switch (choice)
         {
            //Problem 1
             case 1:
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
             break;

            //Problem 3
             case 2:
                {
                 float m = 1.5; //The amount of millimeters the ocean rises each year
                 float a = 0.0; //Will hold totals 
                 cout << "# of Years\tRise in mm\n";
                 cout << "--------------------------\n";
                 for (int x = 0; x <= 25; x++)
                 {
                    a += m;
                    cout << x << "\t\t" << a << "\n";
                 }
                return 0;
                }
             break;

            //Problem 4
             case 3:
                {
                 const float cal = 3.6; //This is how many calories are burned per minute
                 float x; //This will be multiplied to get totals at different times
                 cout << "This program is to calculate the number of calories burned on a";
                 cout << "on a particular treadmill.\n";
                 for ( x=5.0; x <= 30.0; x +=5)
                 {
                    cout << "After " << x << " minutes on the treadmill, you will have burned ";
                    cout << (cal * x) << " calories.\n";     
                 }
                 return 0;
                }
             break;

            //Problem 5
             case 4:
                {
                 float fee = 2500; //This the basic fee which will be increased in the loop
                 const float perc = 0.04; //this 4% increase every year
                 cout << "The next six years the country club will annually increase ";
                 cout << "membership fees by 4 percent\n";
                 cout << "It currently is $2500.\n";
                 for (int x =1; x <=6; x++)
                 {
                    const float inc = (fee * perc); 
                    fee += inc;
                    cout << "Then it will be $" << fee << ".\n";
                 }
                 return 0; 
                }
             break;

            //Problem 6
             case 5:
                {
                 int speed, //Will hold the speed the user enters
                       hrs, //Will hold the number of hours the user enters
                      dist; //Will hold the total distance traveled
                 cout << "This program will show you the amount time traveled at 1 hr intervals\n";
                 cout << "What was your is speed in mph? ";
                 cin >> speed; 
                 cout << "How long were you driving (in hours)? ";
                 cin >> hrs;
                 cout << "Hour \t Distance (miles)\n";
                 cout << "---------------------------\n";
                 for (int x = 0; x <= hrs; x++)
                 {
                    dist = x * speed;
                    cout << x << "\t\t" << dist << endl;
                 }
                 return 0;  
                }
             break;

            //Problem 10
             case 6:
                {
                 int years, 
                      rain, //This will hold the inches of rainfall monthly
                     total, //Will hold total
                     month; //Will hold number of months
                     cout << "How many years are we calculating the average rainfall for? ";
                     cin >> years;
                     month = years * 12;
                     while (years < 1)
                     {
                        cout << "Invalid input. Try again: ";
                        cin >> years;
                     }
                     for (int x = 1; x <= years ; x++)
                     {
                      for (int r = 1; r <= month; r++)
                      {
                         cout << "Enter rainfall (in inches) for month " << r << " of year ";
                         cout << x << ": ";
                         cin >> rain;
                         while (rain < 0)
                         {
                            cout << "Invalid input. Try again: ";
                            cin >> rain;
                         }
                         total += rain;
                      }
                     }
                     cout << "Number of months: " << month << "\n";
                     cout << "Total inches of rainfall: " << setprecision (2) << fixed << total << "\n";
                     cout << "Average monthly inches of rainfall: " << setprecision (2) << fixed << total / month << "\n";
                     return 0; 
                }
             break;

            //Problem 16
             case 7:
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
             break;

            //Problem 17
             case 8:
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
             break;

            //Problem 22
             case 9:
                {
                 int x; //User's choice
                 cout << "Enter a whole number no bigger than 15: ";
                 cin >> x;
                 for (int c = 1; c <= x; c++) //rows
                 {
                    for (int a = 1; a <= x; a++)//columns
                     {cout << "x"; } 
                    cout << endl;
                 }
                 return 0;
                }
             break;

            //Problem 23
             case 10:
                {
                 for (int a = 0; a <= 10; a++)
                 {
                    for (int b = 0; b <= a; b++)
                      {
                        cout << "+";
                      }
                    cout << endl;
                 }
                 for (int a = 10; a >= 1 ; a--)
                 {
                    for (int b = 0; b <= a; b++)
                      {
                        cout << "+";
                      }
                    cout << endl;
                 } 
                 return 0; 
                }
         }   
         }
         while (choice != QUIT_CHOICE);
return 0;
    }