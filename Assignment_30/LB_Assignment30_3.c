/*
Q-3 Accept character from user and check whether it is digit or not(0-9)
Input     :  7
Output    :  TRUE
*/


#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : ChkDigit
// Description    : Check charcter is Digit or not.
// Input          : Character
// Output         : bool
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 27/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkDigit(char ch)
{

    if(ch >= '0' && ch <= '9')
    {
        return true;
    }
    else
    {
        return false;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept character from user and check whether it is digit or not.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    bool bRet = false;
    char ch = '\0';

    printf("Please enter Character : ");
    scanf(" %c",&ch);

    bRet = ChkDigit(ch);

    if(bRet == true)
    {
        printf("Its Digit");
    }
    else
    {
        printf("Its not Digit");
    }
    
    return 0;
}