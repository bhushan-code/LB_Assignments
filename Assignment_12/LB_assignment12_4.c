//Q-4 Write the program which accept which accept number from user and return the multiplication of all the digits.
// Input  :  2395
// Outout :  270

// Input  :  1018
// Outout :  8


#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : MultiDigits
// Description    : Multiplication of all the digits 
// Input          : Integer
// Output         : Intefer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 31/10/2024
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////

int MultiDigits(int iNo)
{
    int iMulti = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iRem = 0;

    while(iNo > 0)
    {
        iRem = iNo % 10;
        iNo = iNo/10;
        if(iRem != 0)
        {
            iMulti = iMulti * iRem;
        }
    }
    return iMulti;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept range from user and return multiplication of all digits.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultiDigits(iValue);
    
    printf("%d\n",iRet);

    return 0;
}