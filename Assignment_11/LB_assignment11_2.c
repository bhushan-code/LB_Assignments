//Q-2 Write the program which accept which accept number from user and check whether it contains 0 in it or not.
// Input  :  2395
// Outout :  There is no zero

// Input  :  1018
// Outout :  It Contain Zero

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : ChkZero
// Description    : Check whether it contains 0 in it or not
// Input          : Integer
// Output         : BOOL
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 30/10/2024
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkZero(int iNo)
{
    bool bChk = false;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iRem = 0;

    while(iNo > 0)
    {
        iRem = iNo % 10;
        iNo = iNo/10;
        if(iRem == 0)
        {
            return true;
        }
    }
    return bChk;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept range from user and display its digits in reverse order.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue1);

    bRet = ChkZero(iValue1);

    if(bRet == true)
    {
        printf("It Contains Zero \n");
    }
    else
    {
        printf("There is no zero \n");
    }

    return 0;
}