/*
Q-3 Write the program which accept number from user and checks whether 9th or 12th bit is ON of OFF. 
    Input : 257
    Output: TRUE
*/

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : ChkBit
// Description    : Checks whether 9th or 12th bit is ON of OFF.
// Input          : Unsigned Integer
// Output         : bool
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 04/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkBit(unsigned int iNo)
{
    int iMask1 = 0x800;
    int iMask2 = 0x100;

    if((iNo & iMask1) || (iNo & iMask2))
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
//This application will accept a number and checks whether 9th or 12th bit is ON of OFF.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    unsigned int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%u",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;
}