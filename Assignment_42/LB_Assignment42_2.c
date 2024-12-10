/* 
Q-2 Write a Recursive program which accept number from user and return summation of its digits.
    Input : 879
    Output: 24
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Sum
// Description    : Return Summation of its digits.
// Input          : Integer
// Output         : Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 10/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Sum(int iNo)
{
    static int iSum = 0;
    if(iNo != 0)
    {
        iSum += iNo % 10;
        iNo = iNo / 10;
        Sum(iNo);
    }
    return iSum;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application accept number from user and return summation of its digits.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Sum(iValue);
    printf("Summation of all the digits are : %d",iRet);

    return 0;
}