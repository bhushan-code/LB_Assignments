/*
Q-5 Accept character from user and display its ASCII value in decimal, octal and hexadecimal foramt.

Input     : %
Output    : TRUE

Input     : d
Output    : FALSE
*/


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Display
// Description    : Display ASCII value in decimal, octal and hexadecimal foramt.
// Input          : Character
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 21/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{    
    printf("Decimal value : %d\n",ch);
    printf("Octal value : %o\n",ch);
    printf("Hexadecimal value : %x\n",ch);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will display its ASCII value in decimal, octal and hexadecimal foramt
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Please enter the character : \n");
    scanf("%c",&cValue);

    Display(cValue);
    
    return 0;
}