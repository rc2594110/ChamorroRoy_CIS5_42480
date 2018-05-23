/* 
 * File:   main.cpp
 * Author: Roy Chamorro
 * Created on May 5, 2018, 2:16 PM
 * Purpose:  Star Search
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
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