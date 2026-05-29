////////////////////////////////////////////////////////////////////
//
//  Assignment No : 5
//
//  Program No : 01
//
//  Program Name : write a program which accept number from user 
//                 and print that number of $ & * on screen
//                 
//  Description  : This program accepts one number from user
//                 and prints '$' and '*' pattern on screen
//                 according to the given number. 
//                  
//  Input  :    5
//  Output :    $   *   $   *   $   *   $   *   $   *
//
//  Input  :    3     
//  Output :    $   *   $   *   $   *
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    Pattern(iValue);
    
    return 0;
}