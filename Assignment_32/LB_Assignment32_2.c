//Q-2 Write the program which checks whether 5th and 18th bit is ON of OFF. 


#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : ChkBit
// Description    : Checks whether 5th and 18th bit is ON of OFF.
// Input          : Unsigned Integer
// Output         : bool
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 04/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkBit(unsigned int iNo)
{
    int iChk = 0;
    int iMask = 0x20010;

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
//This application will accept a number and checks whether 5th and 18th bit is ON of OFF.
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
        printf("5th and 18th bit is ON. \n");
    }
    else
    {
        printf("5th and 18th bit is OFf. \n");
    }

    return 0;
}