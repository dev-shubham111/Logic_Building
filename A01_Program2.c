////////////////////////////////////////////////////////////////////
//
//  Assignment No : 1
//
//  Program No : 02
//
//  Program Name : Program to print 5 times "Marvellous" on Screen
//
//  Description  : This program prints the String as "Marvellous"
//                 5 times on the console with the help of for-loop.
//
//  Input  :  Marvellous
//  Output :  5 times Marvellous
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    int i = 0;
    
    for(i = 1; i <= 5; i++)
    {
        printf("Marvellous\n");
    }
}

int main()
{
    Display();

    return 0;
}