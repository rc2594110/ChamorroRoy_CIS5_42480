/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on May 15, 2018, 4:16 PM
 * Purpose:  Project 2
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
void ACHOICE();
void BCHOICE(); 
void CCHOICE();
void DCHOICE();
void showMenu();
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
     QUIT_CHOICE = 5;
     
 
 cout << "I want to play some number magic trick games\n";
 cout << "I have 2 games through which I can use my magic to "
      << "guess a number you chose\n";
 cout << "Those are Choices 1 and 2\n";
 cout << "Choice 3 is a game through which you will play against me and in which I will";
 cout << " always be the victor!\n You have no chance against me!!!\n";
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
            {
                ACHOICE();
                 break;
            }    
            case Prob2_CHOICE:
            {
                BCHOICE();
                 break;
            }     
            case Prob3_CHOICE:
            { 
                CCHOICE();
                 break;
            }
            case Prob4_CHOICE:
            { 
                DCHOICE();
                 break;
            }
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
    cout << "\n\t\tWelcome to my Number Magic Show\n\n"
      << "******************************************\n\n"
      << "PICK YOUR POISON\n"   
      << "1. Choice 1\n"
      << "2. Choice 2\n"
      << "3. Choice 3\n"
      << "4. Challenge U CANT WIN!\n";
      << "5. Quit the Program\n\n"
      << "Enter your choice: ";
 }
 
 //*****************************************************************
 // This is the definition of Choice 1 which is a game through ***** 
 // which the user will be given directions and the computer will **
 // guess their number through mathematical algorithms *************
 //*****************************************************************
 
 void ACHOICE()
 {
     int n = 10, a, b, c, d, x, y;
     cout << "Welcome to the World of Choice 1";
     cout << "I want you to choose a number, any number\n";
     cout << "Do you have your number?\n";
     cout << "Enter 1 meaning YES, I'm ready!\n";
     cin >> a;
     if (a != 1)
     {
         cout << "There was only one choices: 1\n";
         cout << "Ready now? Enter 1";
         cin >> a;
     }
     else
     {
         cout << "I will now begin to read your mind...";
         cout << "Choose any whole number between 1 and 10\n\n";
         cout << "Press enter 1 to continue";
         cin >> c;
         cout << "Once you have the number, multiply it by 2\n\n";
         cout << "Press enter 1 to continue";
         cin >> x;
         cout << "Now I need you to add " << n << " to it now\n\n";
         cout << "Then divide that number in half\n\n";
         cout << "Press enter 1 to continue";
         cin >> d;
         cout << "Now subtract your original number to the number now\n\n";
         cout << "Ready?\nPress Enter 1 to continue \n\n";
         cin >> y;
         cout << "Is your number 5 now?\n\n";
         cout << "Enter 1 if yes\n";
         cout << "Enter 2 if no\n";
         cin >> b;
         if (b == 1)
         {
             cout << "I was sure of it ! B) I win again!";  
         }
         else 
         {
             cout << "You must have made a mistake cos it was definitely not me! :p";
         }
     }   
 }
 
 //*****************************************************************
 // This is the definition of Choice 1 which is a game through ***** 
 // which the user will be given directions and the computer will **
 // guess their number through mathematical algorithms *************
 //*****************************************************************

 void BCHOICE()
 {
     int a, b, c, d, x;
     cout << "Welcome to Choice 2\n****************\n";
     cout << "I will guess the number you are thinking using my magical powers!\n";
     cout << "Press enter 1 to continue";
     cin >> a;
     cout << "In your head choose a number between 1 - 10 and multiply it by 9\n";
     cout << "Press enter 1 to continue";
     cin >> b;
     cout << "Now take that product and add the digits of the number together\n";
     cout << "e.g. if the number is 15, take 1 and 5 and add them to 6 (1+5=6)\n";
     cout << "Press enter 1 to continue";
     cin >> c;
     cout << "Now choose any number to add to that sum\n";
     cout << "What was the number you just chose to add? ";
     cin >> d;
     x = d + 9;
     cout << "Your number now is " << x << endl;
     cout << "Right?";
 }       
 
 

 
 //*****************************************************************
 // Definition of function Choice 3 by which the program will race *
 // to the number 100 by adding numbers but the program will always* 
 // win through the mathematical algorithm  ************************
 //*****************************************************************
 void DCHOICE()
 {
     int a = 1, b, c, sum;
     int nums [2][];
     cout << "Welcome Choice 3\n******************\n";
     cout << "This game will be a competition between you and me\n";
     cout << "The ultimate goal of the game is to be the first to reach 100\n";
     cout << "This will be achieved by alternatively adding numbers (1-10) to reach 100\n";
     cout << "The first to get to 100, wins!!\n";
     cout << "I will start out with the number " << a << endl;
     cout << "Now it's your turn\n";
     nums [1][0] = a;
     sum = 1;
     for (sum; sum <= 100;)
     {
         cout << "Enter a number: ";
         cin >> b;
         if (b > 10)
         {
             cout << "Invalid input!! Enter a number between 1 and 10: ";
             cin >> b;
         }
         sum += b;
         cout << "Our total is now at " << sum << endl;
         c = 11 - b;
         cout << "My next number is " << c << endl;
         sum += c;
         cout << "That takes our total to " << sum << endl;
         for (int x = 0; ;x++)
         {
            nums [0][x] = b; 
         }
         for (int x = 1; ;x++)
         {
            nums [1][x] = c; 
         }
     }
     if (sum == 100)
     {
         cout << "I win!! You had no chance against me!\n";
     }
     cout << "These were our moves\n";
     cout << "\tX\t\t\tMoves\n";
     cout << "\t********************\n";
     cout << "You: ";
     for (int d = 0; ;d++)
     {
         cout << nums [0][d] <<" ";
     }
     cout << endl;
     cout << "Me: ";
     for (int d = 0; ;d++)
     {
         cout << nums [1][d] <<" ";
     }  
 }   
 
 //*****************************************************************
 // Definition of function Choice 3 by which the program will race *
 // to the number 100 by adding numbers but the program will always* 
 // win through the mathematical algorithm  ************************
 //*****************************************************************
 void CCHOICE()
 {
     int a, b, c, d;
     cout << "Welcome to Choice 3\n****************\n";
     cout << "I will guess the number you are thinking using my magical powers!\n";
     cout << "Press enter 1 to continue";
     cin >> a;
     cout << "In your head choose a number between 1 - 10 and multiply it by 2\n";
     cout << "Press enter 1 to continue";
     cin >> b;
     cout << "Now take that new number and multiply it by 5\n";
     cout << "Press enter 1 to continue";
     cin >> c;
     cout << "Now divide this number by your original number\n";
      cout << "Press enter 1 to continue";
     cin >> d;
     cout << "Your number now is 3\n";
     cout << "Right?";
 }