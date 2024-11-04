//Q-1 Write the program which accept which accept number from user and return the count of even digits
// Input  :  2395
// Outout :  1

// Input  :  1018
// Outout :  2


#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : CountEven
// Description    : Count the even digits of number.
// Input          : Integer
// Output         : Intefer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 31/10/2024
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////

int CountEven(int iNo)
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
        if(iRem % 2 == 0)
        {
            iChk++;
        }
    }
    return iChk;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept range from user and reurn count even digit of number.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);
    
    printf("%d\n",iRet);

    return 0;
}