//Q-5 Write the program which accept which accept number from user and return the difference 
//    between summation of even digits and summation of odd digits.

//Input   :  2395
// Outout :  -15    (2   -17)

// Input  :  1018
// Outout :  6      (8    -2)


#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : CountDiff
// Description    : Difference between summation of even digits and odd digits. 
// Input          : Integer
// Output         : Intefer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 31/10/2024
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iEven = 0,iOdd = 0, iDiff = 0;
    
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
            iEven = iEven + iRem;
        } 
        else
        {
            iOdd = iOdd + iRem;
        }
    }

    iDiff = iEven - iOdd;

    return iDiff;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept range from user and return the difference between summation 
// of even digits and summation of odd digits.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    
    printf("%d\n",iRet);

    return 0;
}