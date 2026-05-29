////////////////////////////////////////////////////////////////////
//
//  Assignment No : 4
//
//  Program No : 02
//
//  Program Name : write a program which accept number from user 
//                 and display its factors in decreasing order
//
//  Description  : This program accepts one number from user and 
//                 displays its factors in decreasing order
//
//  Input  :    12
//  Output :    6   4   3   2   1
//
//  Input  :    13
//  Output :    1
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

void FactRev(int iNo)
{
    int i = 0;

    for(i = iNo / 2; i > 1; i--)
    {
        if(iNo % i == 0)
        {
            printf("%d\t", i);
        }        
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    FactRev(iValue);

    return 0;
}