////////////////////////////////////////////////////////////////////
//
//  Assignment No : 3
//
//  Program No : 01
//
//  Program Name : Write a program which accept one number from user
//                 and print that number of even numbers on screen
//
//  Description  : This program takes one number as input from 
//                 user and prints the sequence of first N even 
//                 numbers with the help of for-loop.
//
//  Input  :    5
//  Output :    2   4   6   8   10
//
//  Input  :    7
//  Output :    2   4   6   8   10  12  14
//
////////////////////////////////////////////////////////////////////


#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        return ;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt * 2);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}