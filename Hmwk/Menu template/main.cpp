/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on February 28, 2018, 4:16 PM
 * Purpose:  Total Purchase
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
#include <time>
#include <cmath>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
void Prob1_CHOICE();
void Prob2_CHOICE(); 
void Prob3_CHOICE();
void Prob4_CHOICE();
void Prob5_CHOICE();        
void Prob6_CHOICE();
void Prob7_CHOICE();       
void Prob8_CHOICE();       
void Prob9_CHOICE();
//Execution Begins Here!
int main(int argc, char** argv)
    {
     int choice; // To hold a menu choice
     // Constants for the menu choices
     const int 
     Prob1_CHOICE = 1,
     Prob2_CHOICE = 2,
     Prob3_CHOICE = 3,
     Prob4_CHOICE = 4,
     Prob5_CHOICE = 5,        
     Prob6_CHOICE = 6,
     Prob7_CHOICE = 7       
     Prob8_CHOICE = 8,       
     Prob9_CHOICE = 9,        
     QUIT_CHOICE = 10;
// Set up numeric output formatting.
 cout << fixed << showpoint << setprecision(2);

 do
 {
    // Display the menu and get the user's choice.
    showMenu();
    cin >> choice;

    // Validate the menu selection.
    while (choice < Prob1_CHOICE || choice > QUIT_CHOICE)
    {
        cout << "Please enter a valid menu choice: ";
        cin >> choice;
    }

    // If the user does not want to quit, proceed.
    if (choice != QUIT_CHOICE)
    {
        switch (choice)
        {
            case Prob1_CHOICE:
                 Prob1_CHOICE();
                 break;
            case Prob2_CHOICE:
                 Prob2_CHOICE();
                 break;
            case Prob3_CHOICE:
                 Prob3_CHOICE();
                 break;
            case Prob4_CHOICE:
                 Prob4_CHOICE();
                 break;
            case Prob5_CHOICE:
                 Prob5_CHOICE();
                 break;
            case Prob6_CHOICE:
                 Prob6_CHOICE();
                 break;
            case Prob7_CHOICE:
                 Prob7_CHOICE();
                 break;
            case Prob8_CHOICE:
                 Prob8_CHOICE();
                 break;
            case Prob9_CHOICE:
                 Prob9_CHOICE();
                 break;     
        }
    }
 } while (choice != QUIT_CHOICE);
 return 0;
 }

 //*****************************************************************
 // Definition of function showMenu which displays the menu. *
 //*****************************************************************

 void showMenu()
 {
 cout << "\n\t\tCh. Menu\n\n"
 << "1. Problem 1\n"
 << "2. Problem 2\n"
 << "3. Problem 3\n"
 << "4. Problem 4\n"
 << "5. Problem 5\n"
 << "6. Problem 6\n"
 << "7. Problem 7\n"        
 << "8. Problem 8\n"
 << "9. Problem 9\n"        
 << "10. Quit the Program\n\n"
 << "Enter your choice: ";
 }
 
 //*****************************************************************
 // Definition of function showMenu which displays the problem. *
 //*****************************************************************
 void Prob1_CHOICE()
 {
     
 }
 
 //*****************************************************************
 // Definition of function showMenu which displays the problem. *
 //*****************************************************************
 void Prob2_CHOICE()
 {
     
 }
 
 //*****************************************************************
 // Definition of function showMenu which displays the problem. *
 //*****************************************************************
 void Prob3_CHOICE()
 {
     
 }
 
 //*****************************************************************
 // Definition of function showMenu which displays the problem. *
 //*****************************************************************
 void Prob4_CHOICE()
 {
     
 }
 
 //*****************************************************************
 // Definition of function showMenu which displays the problem. *
 //*****************************************************************
 void Prob5_CHOICE()
 {
     
 }
 
 //*****************************************************************
 // Definition of function showMenu which displays the problem. *
 //*****************************************************************
 void Prob6_CHOICE()
 {
     
 }
 
 //*****************************************************************
 // Definition of function showMenu which displays the problem. *
 //*****************************************************************
 void Prob7_CHOICE()
 {
     
 }
 
 //*****************************************************************
 // Definition of function showMenu which displays the problem. *
 //*****************************************************************
 void Prob8_CHOICE()
 {
     
 }
 
 //*****************************************************************
 // Definition of function showMenu which displays the problem. *
 //*****************************************************************
 void Prob9_CHOICE()
 {
     
 }
    