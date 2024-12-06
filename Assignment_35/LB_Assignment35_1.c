/* 
Q-1 Write a program which accept one number from user and count number of ON bits in it.
    Input : 11 
    Output: 3
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : CountOne
// Description    : Count number of ON bits.
// Input          : Unsinged Integer
// Output         : Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 04/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountOne(unsigned int iNo)
{
    int iCount = 0;
    int iMask = 0x1;

    while(iNo != 0)
    {
        if((iNo & iMask) != 0)
        {
           iCount++;
        }
        iNo = iNo >> 1;
    }

    return iCount;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept a number and position from user and count number of ON bits in it.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    unsigned int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%u",&iValue);

    iRet = CountOne(iValue);

    printf("Modified number is : %d\n", iRet);

    return 0;
}