////////////////////////////////////////////////////////////////////
//
//  Assignment No : 4
//
//  Program No : 05
//
//  Program Name : write a program which accpet number from user
//                 and return difference between summation of all
//                 its factors and non factors
//
//  Description  : This program accepts one number from user
//                 and returns difference between summation
//                 of factors and summation of non-factors.
//
//  Input  :    12
//  Output :    -34   
//
//  Input  :    10
//  Output :    -29
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iAddFact = 0;
    int iAddNonFact = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iAddFact = iAddFact + iCnt;
        }
        else
        {
            iAddNonFact = iAddNonFact + iCnt;
        }
    }
    
    return (iAddFact - iAddNonFact);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d", iRet);

    return 0;
}