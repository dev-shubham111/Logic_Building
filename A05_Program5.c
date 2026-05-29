////////////////////////////////////////////////////////////////////
//
//  Assignment No : 5
//
//  Program No : 05
//
//  Program Name : write a program which accept N and print 
//                 first 5 multiples of N
//                 
//  Description  : This program accepts one number from user
//                 and displays first five multiples of that number
//                  
//  Input  :    4    
//  Output :    4   8   12  16  20
//
//  Input  :    6   
//  Output :    6   12  18  24  30
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt <= iNo * 5; iCnt++)
    {
        if(iCnt % iNo == 0)
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

    MultipleDisplay(iValue);

    return 0;
}