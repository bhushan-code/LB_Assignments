/* 
Q-5 Write the program which accept one number and Toggle the position content of first and last nibble
of the number. return modified number
*/


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : ToggelBit
// Description    : Toggle first and last nibble.
// Input          : Unsigned Integer
// Output         : Unsigned Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 04/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

unsigned int ToggelBit(unsigned int iNo)
{
    unsigned int iNew = 0;
    unsigned int iMask = 0xf000000f;

    iNew = iMask ^ iNo;

    return iNew;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept a number and Toggle the position content of first and last nibble
//of the number. return modified number.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;

    printf("Enter the number : \n");
    scanf("%u",&iValue);


    iRet = ToggelBit(iValue);

    printf("Modified number is : %u\n", iRet);

    return 0;
}