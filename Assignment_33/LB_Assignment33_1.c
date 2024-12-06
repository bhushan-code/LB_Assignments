/* 
Q-1 Write the program which accept one number from user and OFF the 7th bit of that number if it is ON,
    Return modified number.
    Input : 79
    Output: 15
*/


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : OffBit
// Description    : OFF the 7th bit of that number if it is ON.
// Input          : Unsigned Integer
// Output         : Unsigned Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 04/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

unsigned int OffBit(unsigned int iNo)
{
    unsigned int iNew = 0;
    int iMask = 0x40;

    iMask = ~iMask;

    iNew = iMask & iNo;

    return iNew;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept a number and OFF the 7th bit of that number if it is ON.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;

    printf("Enter the number : \n");
    scanf("%u",&iValue);

    iRet = OffBit(iValue);

    printf("Modified number is : %u",iRet);

    return 0;
}