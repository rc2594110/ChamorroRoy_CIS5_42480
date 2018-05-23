/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on February 28, 2018, 4:16 PM
 * Purpose:  Total Purchase
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
void Prob1_CHOICE();
void Prob2_CHOICE(); 
void Prob3_CHOICE();
void Prob4_CHOICE();
void Prob5_CHOICE();        
void Prob6_CHOICE();
void Prob7_CHOICE();       
void Prob8_CHOICE();       
void Prob9_CHOICE();
void Prob10_CHOICE();
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
     Prob10_CHOICE = 10,        
     QUIT_CHOICE = 11;
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
    int num[10];
    int highest, lowest;
    cout << "Problem 1 Ch. 7 Largest/Smallest Arrays\n";
    for (int x = 0; x < 10; x++)
    {
        cout << "Enter a number: ";
        cin >> num[x];
    }
    highest = num[0];
    for (int count = 1; count < 10; count++)
    {
       if (num[count] > highest)
       highest = num[count];
    }
    lowest = num[0];
    for (int count = 1; count < 10; count++)
    {
       if (num[count] < lowest)
       lowest = num[count];
    }
    cout << "The highest number is " << highest << endl;
    cout << "The lowest number is " << lowest << endl;
    
    return 0; 
 }
 
 //*****************************************************************
 // Definition of function showMenu which displays the problem. *
 //*****************************************************************
 void Prob2_CHOICE()
 {
    cout << "PRoblem 2 Ch. 7 Rainfall Statistics\n";
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
    
    highest = rainFal[0];
    for (int x = 1; x = 12; x++)
    {
       if (rainFal[x-1] > highest)
       highest = rainFal[x-1];
    }
    cout << "The Highest amount of rainfall was " << highest << endl;
    
    lowest = rainFal[0];
    for (int x = 1; x = 12; x++)
    {
       if (rainFal[x-1] < highest)
       lowest = rainFal[x-1];
    } 
 
    cout << "The Lowest amount of rainfall was " << lowest << endl; 
 }
 
 //*****************************************************************
 // Definition of function showMenu which displays the problem. *
 //*****************************************************************
 void Prob3_CHOICE()
 {
     cout << "Problem 3 Ch. 7 Chips and Salsa\n";
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
 }
 
 //*****************************************************************
 // Definition of function showMenu which displays the problem. *
 //*****************************************************************
 void Prob4_CHOICE()
 {
     cout << "Problem 4 Ch. 7 Larger than n\n";
     int x, n;
    cout << "How many elements should the array have? ";
    cin >> x;
    int y[x];
    for (int c = 0; c < x; c++)
    {
        cout << "Enter an element for the array: ";
        cin >> y[c];
    }
    cout << "Enter any number: ";
    cin >> n;
    for (int b = 0; b < x; b++)
    {
        if (y[b] > n)
        {
            cout << y[b] << " is greater than " << n << endl;
        }
    }
 }
 
 //*****************************************************************
 // Definition of function showMenu which displays the problem. *
 //*****************************************************************
 void Prob5_CHOICE()
 {
    cout << "Problem 5 Ch. 7 Monkey Business\n";
    int mnkys[3][5]; 
    float total, avg, high, low;
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            cout << "Enter the amount of pounds of food eaten by monkey " << (x+1);
            cout << " in day " << (y+1);
            cin >> mnkys[x][y];
        }
    }
    total = 0;
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            total += mnkys[x][y];  
        }
    }
    avg = total/5;
    cout << setprecision(2) << fixed;
    cout << "The average pounds for the whole family of monkeys is " << avg;
    high = mnkys[0][0];
    for (int b = 1; b < 5; b++)
    {
        if (mnkys[1][b] > high)
        {
            high = mnkys[1][b];
        }
        cout << "The most monkey 1 ate was " << high << " lbs.";
    } 
    for (int b = 1; b < 5; b++)
    {
        if (mnkys[2][b] > high)
        {
            high = mnkys[2][b];
        }
        cout << "The most monkey 2 ate was " << high << " lbs.";
    }
    for (int b = 1; b < 5; b++)
    {
        if (mnkys[3][b] > high)
        {
            high = mnkys[3][b];
        }
        cout << "The most monkey 3 ate was " << high << " lbs.";
    }
    low = mnkys[0][0];
    for (int b = 1; b < 5; b++)
    {
        if (mnkys[1][b] < high)
        {
            high = mnkys[1][b];
        }
        cout << "The least monkey 1 ate was " << low << " lbs.";
    } 
    for (int b = 1; b < 5; b++)
    {
        if (mnkys[2][b] < low)
        {
            low = mnkys[2][b];
        }
        cout << "The least monkey 2 ate was " << low << " lbs.";
    }
    for (int b = 1; b < 5; b++)
    {
        if (mnkys[3][b] < low)
        {
            low = mnkys[3][b];
        }
        cout << "The least monkey 3 ate was " << low << " lbs.";
    }
 }
 
 //*****************************************************************
 // Definition of function showMenu which displays the problem. *
 //*****************************************************************
 void Prob6_CHOICE()
 {
    cout << "Problem 8 Ch. 7 Lo Shu\n";
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
 }
 
 //*****************************************************************
 // Definition of function showMenu which displays the problem. *
 //*****************************************************************
 void Prob7_CHOICE()
 {
    cout << "Problem 1 Ch. 8 Charge Account Validation\n";
    int accNum[] = {5658845, 4520125, 7895122, 8777541, 1302850, 8080152,
                    4562555, 5552012, 5050552, 7825877, 1250255, 1005231,
                    6545231, 3852085, 7576651, 7881200, 4581002, 8451277};
    int x, a;
    cout << "Enter your 7-digit account number: ";
    cin >> x;
    int y = 0;
    int num = -1;
    bool found = false;
    while (y < 18 && !found)
    {
        if (list [y] == x)
        {
            found = true;
            num = y;
        }
        y++;
    }
 }
 
 //*****************************************************************
 // Definition of function showMenu which displays the problem. *
 //*****************************************************************
 void Prob8_CHOICE()
 {
    cout << "Problem 2 Ch. 8 Lottery Winners\n";
    int num[] = {13579, 26791, 26792, 33445, 55555, 
                 62483, 77777, 79422, 85647, 93121}; 
    int x,//User input for winning number
        y;
    cout << "Enter winning number: ";
    cin >> x;
    int y = 0;
    int nu = -1;
    bool found = false;
    while (y < 10 && !found)
    {
        if (list [y] == x)
        {
            found = true;
            nu = y;
        }
        y++;
    }
    if (nu == -1)
    {
        cout << "Sorry, no winners! :(";
    }
    else 
    {
        cout << "Congrats!\nOne winning number found! ";
        cout << num[y] << " was a winner!";
    }
 }
 
 //*****************************************************************
 // Definition of function showMenu which displays the problem. *
 //*****************************************************************
 void Prob9_CHOICE()
 {
    cout << "Problem 3 Ch. 8 Lottery Winners Modification\n";
    int num[] = {13579, 26791, 26792, 33445, 55555, 
                 62483, 77777, 79422, 85647, 93121}; 
    int x,//User input for winning number
        y;
    cout << "Enter winning number: ";
    cin >> x;
    int first = 0,
        last = 10 -1,
        middle, 
        pos = -1;    
    bool found = false;
    while (!found && first <= last)
    {
        middle = (first + last) / 2;
        if (list[middle] == x)
        {
            found = true;
            pos = middle;
        }
        else if (list[middle] > x)
        {
            last = middle - 1;
        }
        else 
        {
            first = middle + 1;
        }
    }
    if (pos == -1)
    {
        cout << "Sorry, no winners! :(";
    }
    else 
    {
        cout << "Congrats!\nOne winning number found! ";
        cout << num[pos] << " was a winner!";
    }
 }
 
 //*****************************************************************
 // Definition of function showMenu which displays the problem. *
 //*****************************************************************
 void Prob10_CHOICE()
 {
    cout << "Problem 5 Ch. 8 Rainfall Statistics Modification\n";
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
    bool swap;
    int y;
    do
    {
        swap = false;
        for (int a = 0; a < (12 - 1); a++)
        {
            if (rainFal[a] > list[a + 1])
            {
                y = rainFal[a];
                rainFal[a] = rainFal[a + 1];
                rainFal[a + 1] = y;
                swap = true;
            }
        }
    }
    while (swap);
    cout << "\tMonth\t\tAmount of Rain\n";
    cout << "\t**************************\n";
    for (int count = 0; count < 12; count++)
    {
        cout << "\t" << count << "\t\t" << rainFal[count];
    }
 }
    