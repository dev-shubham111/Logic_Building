////////////////////////////////////////////////////////////////////
//
//  Assignment No : 2
//
//  Program No : 05
//
//  Program Name : Accept a number from user and check whether
//                 number is even or odd.
//
//  Description  : This program Accept a number from user and 
//                 check given number is Even or Odd.
//
//  Input  :    6
//  Output :    Given number is a Even Number
//
//  Input  :    11  
//  Output :    Given number is not a Even Number
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }    
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        printf("Given number is a Even Number");
    }
    else
    {
        printf("Given number is not a Even Number");
    }  

    return 0;
}