////////////////////////////////////////////////////////////////////
//
//  Assignment No : 5
//
//  Program No : 02
//
//  Program Name : write a program which accept number from user 
//                 and print numbers till that number
//                 
//  Description  : This program accepts one number from user
//                 and displays numbers from 1 to that number
//                  
//  Input  :    8 
//  Output :    1   2   3   4   5   6   7   8
//
//  Input  :    5     
//  Output :    1   2   3   4   5
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}