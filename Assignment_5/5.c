//Q-5 Write a program which accpet N and print first 5 multiple of N.
//Input  : 18
//Output : 4       8       12      16      20


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : MultipleDisplay
// Description    : Print first 5 multiple of N
// Input          : Integer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 25/10/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;
    int iMulti = 0;
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {   
        iMulti = iCnt * iNo;
        printf("%d\t",iMulti);
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to Accept a number and print first 5 multiple of N
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}