/* 
Q-1 Write the program which accept one number and position from user and check whether bit at that position
    is ON or OFF. If the bit is ON return TRUE and return FALSE.
    Input : 10  2
    Output: TRUE
*/

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : ChkBit
// Description    : Checks bit is ON at given position.
// Input          : Unsigned Integer Integer
// Output         : bool
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 04/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkBit(unsigned int iNo, int iPos)
{
    int iChk = 0;
    int iMask = 0x1;

    iMask = iMask<<(iPos-1);

    iChk = iMask & iNo;

    if(iChk == iMask)
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
//This application will accept a number and position from user and check whether bit at that position
//is ON or OFF. If the bit is ON return TRUE and return FALSE.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    unsigned int iValue = 0;
    bool bRet = false;
    int iPos = 0;

    printf("Enter the number : \n");
    scanf("%u",&iValue);

    printf("Enter the position : \n");
    scanf("%d",&iPos);

    bRet = ChkBit(iValue,iPos);

    if(bRet == true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}