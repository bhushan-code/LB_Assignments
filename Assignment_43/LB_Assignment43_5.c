/* 
Q-5 Write a Recursive program which accept number from user and return its reverse number.
    Input : 673
    Output: 376
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Reverse
// Description    : Return its reverse number.
// Input          : Integer
// Output         : Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 10/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Reverse(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo/10;
        iRev = iRev + iDigit;
        if(iNo != 0)
        {
            iRev = iRev * 10;
        }
    }
    return iRev;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application accept string from user and return its reverse number.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);
    printf("%d",iRet);

    return 0;
}