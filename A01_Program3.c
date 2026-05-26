////////////////////////////////////////////////////////////////////
//
//  Assignment No : 1
//
//  Program No : 03
//
//  Program Name : Program to print 5 to 1 numbers on Screen
//
//  Description  : This program prints the numbers from 5 to 1
//                 on the console with the help of While-loop.
//
//  Input  :    
//  Output :    5   4   3   2   1
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    int i = 0;

    i = 5;

    while(i > 0 )
    {
        printf("%d\n", i);
        i--;
    }    
}

int main()
{
    Display();

    return 0;
}