////////////////////////////////////////////////////////////////////
//
//  Assignment No : 3
//
//  Program No : 03
//
//  Program Name : write a program which accept number from user 
//                 and print even factors of that number
//
//  Description  : This program accepts one number from user 
//                 and displays all even factors of the given 
//                 number using for-loop.
//
//  Input  :    12 
//  Output :    2   4   6
//
//  Input  :    20     
//  Output :    2    4   10
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i < iNo ; i++)
    {
        if((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d\t", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    DisplayEvenFactor(iValue);

    return 0;
}