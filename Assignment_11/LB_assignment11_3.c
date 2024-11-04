//Q-3 Write the program which accept which accept number from user and count frequency of 2 in it.
// Input  :  2395
// Outout :  1

// Input  :  1018
// Outout :  0

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : CountTwo
// Description    : Count frequency of 2 in given number.
// Input          : Integer
// Output         : Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 30/10/2024
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////

int CountTwo(int iNo)
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
        if(iRem == 2)
        {
            iChk++;
        }
    }
    return iChk;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept range from user and count frequency of 2 in it.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);
    
    printf("%d\n",iRet);

    return 0;
}