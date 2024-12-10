/* 
Q-4 Write a Recursive program which accept string from user and return smallest digit.
    Input : 87983
    Output: 3
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Min
// Description    : Count white spaces.
// Input          : Integer
// Output         : Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 10/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Min(int iNo)
{
    static int iMax = 9;                //largest digit 9 taken 
    int iDigit = 0;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iMax > iDigit)
        {
            iMax = iDigit;
        }
        iNo = iNo /10;
        Min(iNo);
    }
    return iMax;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application accept number from user and return smallest digit.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Min(iValue);
    printf("%d",iRet);

    return 0;
}