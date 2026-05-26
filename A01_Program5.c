////////////////////////////////////////////////////////////////////
//
//  Assignment No : 1
//
//  Program No : 05
//
//  Program Name : Accept one number from user and print that 
//                 number of * on screen.
//
//  Description  : This program accepts one number from the user 
//                 and print that number of * on screen.
//
//  Input  :    5
//  Output :    *****   
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    
    return 0;
}