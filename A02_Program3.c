////////////////////////////////////////////////////////////////////
//
//  Assignment No : 2
//
//  Program No : 03
//
//  Program Name : Accept one number from if number is less than 10
//                 then print "Hello" otherwise print "Demo". 
//                 number of * on scrren
//
//  Description  : This program Accept one number from user if 
//                 the number is less than 10 then it print
//                 string "Hello" otherwise it print string "Demo".
//
//  Input  :    5
//  Output :    Hello
//
//  Input  :    11
//  Output :    Demo
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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