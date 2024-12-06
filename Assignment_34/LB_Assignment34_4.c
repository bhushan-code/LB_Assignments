/* 
Q-4 Write the program which accept one number and position from user toggle that bit,
    Return modified number.
    Input : 10  3
    Output: 14
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : ToggelBit
// Description    : Checks bit is ON at given position.
// Input          : Unsinged Integer, Integer
// Output         : Unsinged Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 04/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

unsigned int ToggelBit(unsigned int iNo, int iPos)
{
    unsigned int iNew = 0;
    int iMask = 0x1;

    iMask = iMask<<(iPos-1);

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
    int iPos = 0;

    printf("Enter the number : \n");
    scanf("%u",&iValue);

    printf("Enter the position : \n");
    scanf("%d",&iPos);

    iRet = ToggelBit(iValue,iPos);

    printf("Modified number is : %u\n", iRet);

    return 0;
}