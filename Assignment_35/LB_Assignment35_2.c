/* 
Q-2 Write the program which accept two numbers from user and display position of common ON bits from numbers.
    Input : 10  15
    Output: 2   4
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : CommonBits
// Description    : Display position of common ON bits from numbers.
// Input          : Unsinged Integer, Unsinged Integer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 04/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void CommonBits(unsigned int iNo1, unsigned int iNo2)
{
    int iCount = 0;
    int iMask = 0x1;

    while(iNo1 != 0)
    {
        iCount++;

        if((iNo1 & iMask) && (iNo2 & iMask))
        {
            printf("%d\t",iCount);
        }
        iNo1 = iNo1 >> 1;
        iNo2 = iNo2 >> 1;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept  two numbers from user and display position of common ON bits from numbers.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    unsigned int iValue1 = 0, iValue2 = 0;

    printf("Enter the number : \n");
    scanf("%u",&iValue1);
    
    printf("Enter the number : \n");
    scanf("%u",&iValue2);

    CommonBits(iValue1, iValue2);

    return 0;
}