//Q-5 Write the code which returns difference between Even factorial and odd factorial of given number.
//Input  : 5
//Output : -7

 
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : FactorialDiff
// Description    : Find difference between Even factorial and odd factorial of given number
// Input          : Integer
// Output         : Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 16/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
   int iCnt = 0;
   int iFactE = 1;
   int iFactO = 1;

    if(iNo < 0)
        {
            iNo = - iNo;
        }

   for(iCnt = iNo; iCnt >= 1; iCnt--)
   {
        
        if(iCnt % 2 == 0)
        {
            iFactE = iCnt * iFactE;        
        }
        else
        {
            iFactO = iCnt * iFactO;        
        }
   }
   return (iFactE - iFactO);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to find  difference between Even factorial and odd factorial of given number
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;
}