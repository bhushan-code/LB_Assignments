//Q-3 Write the program which accept which accept number from user and return the count of digits in between 3 and 7.
// Input  :  2395
// Outout :  1

// Input  :  1018
// Outout :  0


#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : CountRange
// Description    : Count the digits in between 3 and 7.
// Input          : Integer
// Output         : Intefer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 31/10/2024
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iChk = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iRem = 0;

    while(iNo > 0)
    {
        iRem = iNo % 10;
        iNo = iNo/10;
        if(iRem > 3 && iRem < 7)
        {
            iChk++;
        }
    }
    return iChk;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept range from user and return count digit in between 3 to 7.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);
    
    printf("%d\n",iRet);

    return 0;
}