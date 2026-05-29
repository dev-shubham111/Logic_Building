////////////////////////////////////////////////////////////////////
//
//  Assignment No : 4
//
//  Program No : 01
//
//  Program Name : Write a program which accept number from user 
//                 and display its multiplication of factors
//
//  Description  : This program accepts one number from user 
//                 and calculates the difference between the
//                 summation of its factors and the summation 
//                 of its non-factors
//
//  Input  :    12
//  Output :    144 
//
//  Input  :    13
//  Output :    1
//
////////////////////////////////////////////////////////////////////
#include<stdio.h>

int MultFact(int iNo)
{
    int i = 0;
    int iMult = 1;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i < iNo; i++)
    {
        if(iNo % i == 0)
        {
            iMult = iMult * i;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d", iRet);

    return 0;
}