////////////////////////////////////////////////////////////////////
//
//  Assignment No : 3
//
//  Program No : 04
//
//  Program Name : Accept one character from user and convert case 
//                 of that character
//
//  Description  : This program accepts one character from user 
//                 and converts lowercase character into uppercase 
//                 and uppercase character into lowercase.
//
//  Input  :    F  
//  Output :    f
//
//  Input  :    s        
//  Output :    S    
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayConvert(char cValue)
{
    if( (cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("%c", cValue + 32);
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("%c", cValue - 32);
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter character :\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}