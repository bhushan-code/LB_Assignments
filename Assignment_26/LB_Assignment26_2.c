/*
Q-2 Accept character from user. If character is small display its corresponding capital character,
and if it small then display its corresponding capital. In other cases display as it is.

Input     : Q
Output    : q

Input     : m
Output    : M

Input     : %
Output    : %
*/


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : DisplayASCII
// Description    : Display in lower case if capital and if lower display in capital case.
// Input          : Character
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 21/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(char chX)
{
    if(chX >= 65 && chX <= 90)
    {
        chX = chX + 32;
        printf("Output is : %c\n",chX);
    }
    else if(chX >= 97 && chX <= 122)
    {
        chX = chX - 32;
        printf("Output is : %c\n",chX);
    }
    else
    {
        printf("%c",chX);
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application will Display in lower case if capital and if lower display in capital case.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char ch = '\0';

    printf("Please enter the character : \n");
    scanf("%c",&ch);

    Display(ch);
    
    return 0;
}