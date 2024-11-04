//Q-1 Write a program which accept range from user and return addtion of all numbers in between that range.
// INput  : 23	30
// Output :	212

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : RangeSum
// Description    : Display sum of all even number in between range.
// Input          : Integer, Integer
// Output         : Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 30/10/2024
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd)
{
        int iSum = 0;
        int iCnt = 0;
        
        if(iStart <= iEnd && iStart > 0)
        {

            for(iCnt = iStart; iCnt <= iEnd; iCnt++)
            {
                    iSum = iSum + iCnt;
            }

        }

    return iSum;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept range from user and return addtion of all numbers in between that range.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Starting point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending point : ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if(iRet == 0)
    {
        printf("Invalid Range\n");
    }
    else
    {
        printf("Addition is %d\n",iRet);
    }

    return 0;
}