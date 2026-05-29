////////////////////////////////////////////////////////////////////
//
//  Assignment No : 4
//
//  Program No : 04
//
//  Program Name : write a program which accpet number from user 
//                 and return summation of all its non factors
//
//  Description  : This program accepts one number from user and 
//                 returns summation of all its non-factors
//
//  Input  :    12
//  Output :    50  
//
//  Input  :    10
//  Output :    37
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

int SumNonFact(int iNo)
{
    int i = 0;

    int iAddNonFact = 0;

    for(i = 1; i < iNo; i++)
    {
        if(iNo % i != 0)
        {
            iAddNonFact = iAddNonFact + i;
        }
    }    
    return iAddNonFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("%d", iRet);

    return 0;
}