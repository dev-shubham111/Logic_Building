////////////////////////////////////////////////////////////////////
//
//  Assignment No : 1
//
//  Program No : 04
//
//  Program Name : Accept one number and check whether it is 
//                 divisible by 5 or not.
//
//  Description  : This program accepts one number from the user 
//                 and checks whether the number is divisible
//                 by 5 or not.
//
//  Input  :    10
//  Output :    Divisible by 5    
//
//  Input  :    18
//  Output :    Not Divisible by 5
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if((iNo % 5 == 0))
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

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}