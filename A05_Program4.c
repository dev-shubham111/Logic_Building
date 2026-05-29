////////////////////////////////////////////////////////////////////
//
//  Assignment No : 5
//
//  Program No : 04
//
//  Program Name : write a program which accepts N from user 
//                 and print all odd numbers up to N
//                 
//  Description  : This program accepts one number from user 
//                 and displays all odd numbers up to that number
//                  
//  Input  :    18
//  Output :    1   3   5   7   9   11  13  15  17
//
//  Input  :    9
//  Output :    1   3   5   7   
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

int OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}