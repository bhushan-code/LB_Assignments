/* 
Q-5 Write a Recursive program which accept number from user and return product of its digits.
    Input : 523
    Output: 30
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Multi
// Description    : Return product of its digits.
// Input          : Integer
// Output         : Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 10/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Multi(int iNo)
{
    static int iMulti = 1;
    int iDigit = 0;
    if(iNo != 0)
    { 
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            iMulti = iMulti * iDigit;
        }
        iNo = iNo/10;
        Multi(iNo);

    }
    return iMulti;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application accept number from user and return Product of its digits.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Multi(iValue);
    printf("%d",iRet);

    return 0;
}