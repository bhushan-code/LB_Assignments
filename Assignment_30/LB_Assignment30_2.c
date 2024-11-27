/*
Q-2 Accept character from user and check whether it is capital or not(A-Z)
Input     :  F
Output    :  TRUE
*/


#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : ChkCapital
// Description    : Check charcter is Capital or not.
// Input          : Character
// Output         : bool
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 27/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkCapital(char ch)
{

    if(ch >= 'A' && ch <= 'Z')
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
//This application will accept character from user and check whether it is capital or not.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    bool bRet = false;
    char ch = '\0';

    printf("Please enter Character : ");
    scanf(" %c",&ch);

    bRet = ChkCapital(ch);

    if(bRet == true)
    {
        printf("Its Capital Character");
    }
    else
    {
        printf("Its not Capital Character");
    }
    
    return 0;
}