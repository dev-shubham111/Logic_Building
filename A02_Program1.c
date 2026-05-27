////////////////////////////////////////////////////////////////////
//
//  Assignment No : 2
//
//  Program No : 01
//
//  Program Name : Accept one number from user and print that 
//                 number of * on scrren
//
//  Description  : This program Accept one number form user 
//                 and prints the numbers of * on the console 
//                 with the help of While-loop.
//
//  Input  :    5   
//  Output :    *****
//
//  Input  :    12   
//  Output :    ************
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    while (iCnt < iNo)
    {
        printf("*");

        iCnt++;
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