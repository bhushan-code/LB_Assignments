//Q-5 Write the program which accept which accept number from user and count frequency of such a digits which are less than 6.
// Input  :  2395
// Outout :  3

// Input  :  9440
// Outout :  3

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Count
// Description    : Count frequency of digit less than 6 in given number.
// Input          : Integer
// Output         : Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 30/10/2024
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////

int Count(int iNo)
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
        if(iRem < 6)
        {
            iChk++;
        }
    }
    return iChk;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept range from user and count frequency c
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Count(iValue);
    
    printf("%d\n",iRet);

    return 0;
}