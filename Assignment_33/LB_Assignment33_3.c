/* 
Q-3 Write the program which accept one number from user and toggle the 7th bit of that number,
    Return modified number.
    Input : 137
    Output: 201
*/


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : ToggleBit
// Description    : Toggle the 7th bit of that number if it is ON.
// Input          : Unsigned Integer
// Output         : Unsigned Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 04/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

unsigned int ToggleBit(unsigned int iNo)
{
    unsigned int iNew = 0;
    int iMask = 0x40;

    iNew = iMask ^ iNo;

    return iNew;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept a number and toggle the 7th bit of that number if it is ON.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;

    printf("Enter the number : \n");
    scanf("%u",&iValue);

    iRet = ToggleBit(iValue);

    printf("Modified number is : %u",iRet);

    return 0;
}