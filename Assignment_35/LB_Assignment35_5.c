/*
Q-5 Write the program which accept number from user and range of Positions from user,
    Toggel all bits from that range.
    Input : 897     9      13
*/


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : ToggelBit
// Description    : 
// Input          : Unsinged Integer, Integer
// Output         : Unsinged Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 04/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

unsigned int ToggelBit(unsigned int iNo, int iStart, int iEnd)
{
    unsigned int iNew = 0;

    int iMask = 0x1;
    int iTempMask = 0x1;
              
    for(int i = iStart; i <= iEnd; i++)
    {
        iMask = iTempMask | iMask;
        iTempMask = iTempMask<<1;
    }

    iMask = iMask<<(iStart-1);

    iNew = iMask ^ iNo;

    return iNew;
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
    unsigned int iRet = 0;
    int iPos1 = 0, iPos2 = 0;

    printf("Enter the number : \n");
    scanf("%u",&iValue);

    printf("Enter Start position : \n");
    scanf("%d",&iPos1);

    printf("Enter End position : \n");
    scanf("%d",&iPos2);

    iRet = ToggelBit(iValue, iPos1, iPos2);

    printf("Modified number is : %u\n", iRet);

    return 0;
}