////////////////////////////////////////////////////////////////////
//
//  Assignment No : 2
//
//  Program No : 04
//
//  Program Name : Accept two numbers from user and display first
//                 number in second number of times.
//
//  Description  : This program Accept two numbers from user and 
//                 display the first number in the times of 
//                 second number entered using for loop.
//
//  Input  :    5   4
//  Output :    5   5   5   5
//
//  Input  :    11  7
//  Output :    11  11  11  11  11  11  11
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    printf("Enter Number : \n");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}