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
 float calculateRetail(float, float);

int main(int argc, char** argv)
    {
    float whlsl, //wholesale price
          mrkup; //markup percentage 
    cout << "Enter the wholesale price and markup percentage to get the retail price. ";
    cin >> whlsl >> mrkup;
    calculateRetail(whlsl, mrkup);
    return 0;
    }
//***********************************************************
// This function is to calculate the retail price with the  *
// wholesale price and markup percentage the user enters    *
//***********************************************************  
float calculateRetail(float whlsl, float mrkup)
{
    float rtlpr; //retail price
    mrkup /= 100;
    rtlpr = whlsl + (mrkup * whlsl);
    cout << fixed << showpoint << setprecision(2);//formatting
    cout << "Retail price is $" << rtlpr;
    return rtlpr;
}
 }
 
 //*****************************************************************
 // Definition of function showMenu which displays the problem. *
 //*****************************************************************
 void Prob2_CHOICE()
 {
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
 }
 
 //*****************************************************************
 // Definition of function showMenu which displays the problem. *
 //*****************************************************************
 void Prob3_CHOICE()
 {
     float fallingDistance(int);
//Execution Begins Here!
int main(int argc, char** argv)
    {
    int x = 1;
    //This program will run through values in seconds and show the distance they have fallen
    cout << "\t\tTime Passed (in sec)\t\tDistance Fallen (in meters)\n";
    cout << "\t\t***********************************************************\n";
    fallingDistance(x); 
    return 0; 
    }
//This function will do all the calculating with the formula
float fallingDistance(int x)
{
    for (x; x <= 10; x++)
    {
        float d = ((0.5) * (9.8) * (pow(x, 2)));
        cout << "\t\t" << x << "\t\t\t\t" << d <<"\n";        
    }
    return 0;
}
 }
 
 //*****************************************************************
 // Definition of function showMenu which displays the problem. *
 //*****************************************************************
 void Prob4_CHOICE()
 {
     double celsius (int);
//Execution Begins Here!
int main(int argc, char** argv)
    {
    int f = 1;
    //This program will run through values in Fahrenheit and show the Celsius equivalent
    cout << "\t\tDegrees in Fahrenheit\t\tDegrees in Celsius\n";
    cout << "\t\t**************************************************\n";
    celsius (f); 
    return 0; 
    }
//This function will do all the calculating with the formula
double celsius (int f)
{
    for (f; f <= 20; f++)
    {
        double c = (5.0 * (f - 32))/9;
        cout << "\t\t" << f << "\t\t\t\t" << c <<"\n";        
    }
    return 0;
}
 }
 
 //*****************************************************************
 // Definition of function showMenu which displays the problem. *
 //*****************************************************************
 void Prob5_CHOICE()
 {
     int coinToss (int);
//Execution Begins Here!
int main(int argc, char** argv)
    { 
    int coin;
    cout << "How many coin tosses do you want? ";
    cin >> coin;
        for (int x = 1; x <= coin; x++)
        {
            coinToss(x);
        }
    return 0;
     
    }
    int coinToss (int a)
    {
       const int MIN_VALUE = 1;
       const int MAX_VALUE = 2;
       unsigned seed = time(0);
       srand(seed);
       a = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
       if (a == 1)
            {
                cout << "Toss is HEADS!\n";
            }
       if (a == 2)
            {
                cout << "Toss is TAILS!\n";
            }
       return 0;
    }
 }
 
 //*****************************************************************
 // Definition of function showMenu which displays the problem. *
 //*****************************************************************
 void Prob6_CHOICE()
 {
     float futureValue (float, float, int);
//Execution Begins Here!
int main(int argc, char** argv)
    {
    float F,//Future Value
          P,//Present value
          i;//interest rate
    int t; //months
    cout << "Enter Present value of account, interest rate and number of months: ";
    cin >> P >> i >> t;
    F = futureValue (P, i, t);
    cout << setprecision(2) << fixed;
    cout << "The Future Value of the account is $" << F;
    return 0;
    }
//This function will do all the calculating for the future value of the account
float futureValue (float P, float i, int t)
{
    float F = P * pow((1 + i), t);
    return F;
}
 }
 
 //*****************************************************************
 // Definition of function showMenu which displays the problem. *
 //*****************************************************************
 void Prob7_CHOICE()
 {
     void getJudgeData();
void calcScore(float, float, float, float, float);
int findLowest(float, float, float, float, float);
int findHighest(float, float, float, float, float);
//Execution Begins Here!
int main(int argc, char** argv)
    {
     float j1, j2, j3, j4, j5;
     void getJudgeData(j1);
     void getJudgeData(j2);
     void getJudgeData(j3);
     void getJudgeData(j4);
     void getJudgeData(j5);
     void calcScore(j1, j2, j3, j4, j5);
    }
//This function will ask users for judge's score
void getJudgeData(float &Score)
{
    do
	{
            cout << "Enter a judge’s score: ";
	    cin  >> Score;

	    if (Score < 0 || Score > 10)
	    {
	    	cout << "Invalid input! Enter a number between 1 and 10";
	    }
	} while (Score < 0 || Score > 10);   
}
//This function will calculate score
void calcScore(float j1, float j2, float j3, float j4, float j5)
{
    int H, L;
    float avg;
    H = int findLowest(j1,j2, j3, j4, j5);
    L = int findHighest(j1,j2, j3, j4, j5);
    if (H == j1)
	{
            if (L == j2)
            {
                avg = (j3 + j4 + j5)/3;
            }
	    else if (L == j3)
            {
                avg = (j2 + j4 + j5)/3;
            }
	    else if (L == j4)
            {
                avg = (j3 + j2 + j5)/3;
            }
	    else
            {
                avg = (j2 + j3 + j4)/3;
            }
	}
    else if (H == j2)
	{
            if (L == j1)
            {
                avg = (j3 + j4 + j5)/3;
            }
	    else if (L == j3)
            {
                avg = (j1 + j4 + j5)/3;
            }
	    else if (L == j4)
            {
                avg = (j3 + j1 + j5)/3;
            }
	    else
            {
                avg = (j1 + j3 + j4)/3;
            }
	}
    else if (H == j3)
	{
            if (L == j1)
            {
                avg = (j2 + j4 + j5)/3;
            }
	    else if (L == j2)
            {
                avg = (j1 + j4 + j5)/3;
            }
	    else if (L == j4)
            {
                avg = (j2 + j1 + j5)/3;
            }
	    else
            {
                avg = (j1 + j2 + j4)/3;
            }
	}
    else if (H == j4)
	{
            if (L == j1)
            {
                avg = (j3 + j2 + j5)/3;
            }
	    else if (L == j3)
            {
                avg = (j1 + j2 + j5)/3;
            }
	    else if (L == j2)
            {
                avg = (j3 + j1 + j5)/3;
            }
	    else
            {
                avg = (j1 + j3 + j2)/3;
            }
	}
    else if (H == j5)
	{
            if (L == j1)
            {
                avg = (j3 + j4 + j2)/3;
            }
	    else if (L == j3)
            {
                avg = (j1 + j4 + j2)/3;
            }
	    else if (L == j4)
            {
                avg = (j3 + j1 + j2)/3;
            }
	    else
            {
                avg = (j1 + j3 + j4)/3;
            }
	}
    cout << "The score is " << avg;
}
int findLowest(float j1, float j2, float j3, float j4, float j5)
{
    if (j1 < j2 && j1 < j3 && j1 < j4 && j1 < j5)
    {
        return j1;
    }
    else if (j2 < j1 && j2 < j3 && j2 < j4 && j2 < j5)
    {
        return j2;
    }
    else if (j3 < j2 && j3 < j1 && j3 < j4 && j3 < j5)
    {
        return j3;
    }
    else if (j4 < j2 && j4 < j3 && j4 < j1 && j4 < j5)
    {
        return j4;
    }
    else
    {
        return j5;
    }
}
int findHighest(float j1, float j2, float j3, float j4, float j5)
{
    if (j1 > j2 && j1 > j3 && j1 > j4 && j1 > j5)
    {
        return j1;
    }
    else if (j2 > j1 && j2 > j3 && j2 > j4 && j2 > j5)
    {
        return j2;
    }
    else if (j3 > j2 && j3 > j1 && j3 > j4 && j3 > j5)
    {
        return j3;
    }
    else if (j4 > j2 && j4 > j3 && j4 > j1 && j4 > j5)
    {
        return j4;
    }
    else
    {
        return j5;
    }
}
 }
 
 //*****************************************************************
 // Definition of function showMenu which displays the problem. *
 //*****************************************************************
 void Prob8_CHOICE()
 {
     int numEmp(int);
int numDay(int);
float avg(int, int);
//Execution Begins Here!
int main(int argc, char** argv)
    {
    int x,y;
    double z;
    cout << "This program will calculate the the average number of days employees";
    cout << " are absent.\n";
    x = numEmp(x);
    y = numDay(y); 
    z = avg( x, y);
    cout << "The average number absences is " << z;
    return 0;
    }
    
//this function will ask user for number of employees
int numEmp(int x)
{
    cout << "Enter the number of employees: ";
    cin >> x;
    if (x < 1)
    {
        cout << "Invalid input. Enter value of 1 or greater than one ";
        cin >> x;
    }
    return x;
}

//this function will ask for number of days absent
int numDay(int y)
{
    cout << "Enter the number of absent days: ";
    cin >> y;
     if (y < 0)
    {
        cout << "Invalid input. Enter value of 0 or greater than 0 ";
        cin >> y;
    }
    return y;
}

//this function will average the two inputs 
float avg(int x, int y)
{
    float avg = y/x;
    return avg;
}
 }
 
 //*****************************************************************
 // Definition of function showMenu which displays the problem. *
 //*****************************************************************
 void Prob9_CHOICE()
 {
    bool isPrime (int);
//Execution Begins Here!
int main(int argc, char** argv)
    {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    if (x == 1 || x == 2 || x == 3)
    {
       cout << "Number entered is prime!"; 
    }
    else if (isPrime(x) == true)
    {
        cout << "Number entered is prime!";
    }
    else if (isPrime(x) == false)
    {
        cout << "Number enter is not prime!";
    }
    return 0;
    }
bool isPrime (int x)
{
    for ( int a = 2; a < x; a++)
    {
        int b = x % a;
        if (b == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
} 
 }
    