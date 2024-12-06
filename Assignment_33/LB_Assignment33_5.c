/* 
Q-5 Write the program which accept one number from user and ON its first 4bits,
    Return modified number.
    Input : 73
    Output: 79
*/


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : OnBit
// Description    : Toggle the 7th bit and 10th of that number if it is ON.
// Input          : Unsigned Integer
// Output         : Unsigned Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 04/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

unsigned int OnBit(unsigned int iNo)
{
    unsigned int iNew = 0;
    int iMask = 0xf;

    iNew = iMask | iNo;

    return iNew;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept a number and toggle the 7th bit and 10th of that number if it is ON.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;

    printf("Enter the number : \n");
    scanf("%u",&iValue);

    iRet = OnBit(iValue);

    printf("Modified number is : %u",iRet);

    return 0;
}