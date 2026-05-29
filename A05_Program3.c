////////////////////////////////////////////////////////////////////
//
//  Assignment No : 5
//
//  Program No : 03
//
//  Program Name : write a program which accpet number from user
//                 and print its numbers line
//                 
//  Description  : This program accepts one number from user
//                 and displays numbers from negative to positive
//                 range of that number
//                  
//  Input  :     4
//  Output :    -4  -3  -2  -1  0   1   2   3   4   
//
//  Input  :     3      
//  Output :    -3  -2  -1  0   1   2   3
//  
////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}