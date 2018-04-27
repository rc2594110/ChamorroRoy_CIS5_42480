/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on April 17, 2018, 5:34 PM
 * Purpose:  Project 1: Roy's 21 (I turn 21 this year)
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cstdlib> // For rand and srand
#include <iomanip> //
#include <ctime> //For random generator
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv)
    {
     // The only game I believed I could manage to code was the game of 21
     // The game consists of drawing cards to reach a sum of 21
     // In order for it to be single player I will ask the player to wage 2 - 6
     // in how many cards they think they can reach 21
    
    
    cout << "\t Welcome to Roy's Game of 21 \t\n";
    cout << "\t ******\t ******\t ******\t ******\t\n";
    cout << "\t *****\t *****\t *****\t *****\t\n";
    cout << "\t ****\t ****\t ****\t ****\t\n";
    cout << "\t ***\t ***\t ***\t ***\t\n";
    cout << "\t **\t **\t **\t **\t\n";
    cout << "\t *\t *\t *\t *\t\n";
    int a, b, c, d, e, f, 
        num; //number of cards the user wants
    const int MIN_VALUE = 1;//for value of card
    const int MAX_VALUE = 10;//for value of card
    const int MIN_VALUE1 = 1;//for suit of card
    const int MAX_VALUE1 = 4;//for suit of card
    unsigned seed = time(0);
    srand(seed);
    cout << "The rules are simple: Get a sum of 21! \n";
    cout << "You will have to wager how many cards you want, to reach 21\n";
    cout << "Then you will be randomly dealt your cards\n";
    cout << "From 2 to 6, how many cards do you want? ";
    cin >> num;
    if ( num < 2 || num > 6){
        cout << "Invalid choice!\n";
        cout << "Choose a number 2-6: ";
        cin >> num;
    }else if (num >= 2 || num <= 6){
        if (num == 2){
            for (int x = 1; x <= num; x++){
                a = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
                f = (rand() % (MAX_VALUE1 - MIN_VALUE1 + 1)) + MIN_VALUE1;
                if (f == 1){
                    cout << "Card no. " << x << " is the " << a << " of hearts!\n";   
                }else if (f == 2){
                    cout << "Card no. " << x << " is the " << a << " of diamonds!\n";   
                }else if (f == 3){
                    cout << "Card no. " << x << " is the " << a << " of clubs!\n";   
                }else if (f == 4){
                    cout << "Card no. " << x << " is the " << a << " of spades!\n" ;  
                } 
            }  
        }
        if (num == 3){
            for (int x = 1; x <= num; x++){
                a = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
                f = (rand() % (MAX_VALUE1 - MIN_VALUE1 + 1)) + MIN_VALUE1;
                if (f == 1){
                    cout << "Card no. " << x << " is the " << a << " of hearts!\n";   
                }else if (f == 2){
                    cout << "Card no. " << x << " is the " << a << " of diamonds!\n";   
                }else if (f == 3){
                    cout << "Card no. " << x << " is the " << a << " of clubs!\n";   
                }else if (f == 4){
                    cout << "Card no. " << x << " is the " << a << " of spades!\n" ;  
                }
            }  
        }
        if (num == 4){
            for (int x = 1; x <= num; x++){
                a = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
                f = (rand() % (MAX_VALUE1 - MIN_VALUE1 + 1)) + MIN_VALUE1;
                if (f == 1){
                    cout << "Card no. " << x << " is the " << a << " of hearts!\n";   
                }else if (f == 2){
                    cout << "Card no. " << x << " is the " << a << " of diamonds!\n";   
                }else if (f == 3){
                    cout << "Card no. " << x << " is the " << a << " of clubs!\n";   
                }else if (f == 4){
                    cout << "Card no. " << x << " is the " << a << " of spades!\n" ;  
                }
            }  
        }
        if (num == 5){
            for (int x = 1; x <= num; x++){
                a = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
                f = (rand() % (MAX_VALUE1 - MIN_VALUE1 + 1)) + MIN_VALUE1;
                if (f == 1){
                    cout << "Card no. " << x << " is the " << a << " of hearts!\n";   
                }else if (f == 2){
                    cout << "Card no. " << x << " is the " << a << " of diamonds!\n";   
                }else if (f == 3){
                    cout << "Card no. " << x << " is the " << a << " of clubs!\n";   
                }else if (f == 4){
                    cout << "Card no. " << x << " is the " << a << " of spades!\n" ;  
                }
            }  
        }
        if (num == 6){
            for (int x = 1; x <= num; x++){
                a = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
                f = (rand() % (MAX_VALUE1 - MIN_VALUE1 + 1)) + MIN_VALUE1;
                if (f == 1){
                    cout << "Card no. " << x << " is the " << a << " of hearts!\n";   
                }else if (f == 2){
                    cout << "Card no. " << x << " is the " << a << " of diamonds!\n";   
                }else if (f == 3){
                    cout << "Card no. " << x << " is the " << a << " of clubs!\n";   
                }else if (f == 4){
                    cout << "Card no. " << x << " is the " << a << " of spades!\n" ;  
                }
            }  
        }  
    }
    
        
    

    return 0; 
    }
    