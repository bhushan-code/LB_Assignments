//Q-4Write the code to find odd factorial og given numbber.
//Input  : 5
//Output : 15 (5*3*1)

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : OddFactoreial
// Description    : Find odd factorial
// Input          : Integer
// Output         : Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 27/10/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int OddFactorial(int iNo)
{
   int iCnt = 0;
   int iFactO = 1;

    if(iNo < 0)
        {
            iNo = - iNo;
        }

   for(iCnt = iNo; iCnt >= 1; iCnt--)
   {
        
        if(iCnt % 2 != 0)
        {
            iFactO = iCnt * iFactO;        
        }
   }
   return iFactO;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to find odd factorial of given numbber
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);

    return 0;
}