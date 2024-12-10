/* 
Q-2 Write a Recursive program which accept number from user and return largest digit.
    Input : 87983
    Output: 9
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Max
// Description    : Return largest digit.
// Input          : Integer
// Output         : Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 10/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Max(int iNo)
{
    static int iMax = 0;
    int iDigit = 0;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iMax < iDigit)
        {
            iMax = iDigit;
        }
        iNo = iNo /10;
        Max(iNo);
    }
    return iMax;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application accept number from user and return largest digit.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Max(iValue);
    printf("%d",iRet);

    return 0;
}