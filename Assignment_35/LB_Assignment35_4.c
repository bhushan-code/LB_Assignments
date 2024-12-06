/*
Q-4 Write the program which accept number from user and two position from user and 
    checks whether first or second bit is ON of OFF. 
    Input : 10  4   7
    Output: TRUE
*/

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : ChkBit
// Description    : Checks whether  first or second bit is ON of OFF.
// Input          : Unsigned Integer, Integer, Integer 
// Output         : bool
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 04/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkBit(unsigned int iNo,int iPos1,int iPos2)
{
    int iMask1 = 0x1;
    int iMask2 = 0x1;

    iMask1 = iMask1<<(iPos1-1);
    iMask2 = iMask2<<(iPos2-1);

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
//This application will accept a number and checks whether first or second bit is ON of OFF.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    unsigned int iValue = 0;
    int iPos1 = 0, iPos2 = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%u",&iValue);

    printf("Enter fisrt position : \n");
    scanf("%d",&iPos1);
    
    printf("Enter second position : \n");
    scanf("%d",&iPos2);

    bRet = ChkBit(iValue,iPos1,iPos2);

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