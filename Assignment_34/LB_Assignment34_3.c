/* 
Q-3 Write the program which accept one number and position from user and ON that bit,
    Return modified number.
    Input : 10  3
    Output: 14
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : OnBit
// Description    : Checks bit is ON at given position.
// Input          : Unsinged Integer, Integer
// Output         : Unsinged Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 04/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

unsigned int OnBit(unsigned int iNo, int iPos)
{
    unsigned int iNew = 0;
    int iMask = 0x1;

    iMask = iMask<<(iPos-1);

    iNew = iMask | iNo;

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

    iRet = OnBit(iValue,iPos);

    printf("Modified number is : %u\n", iRet);

    return 0;
}