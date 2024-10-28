//Q-1 Write a program which accept the numbers from user and print that number of $ & * on screen.
//Input  : 5
//Output : $   *   $   *   $   *   $   *   $   *


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Pattern
// Description    : Display N number of $ & * on screen.
// Input          : Integer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 25/10/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$   *\t");
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to Accept a number and print that number of $ & * on screen.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    
    printf("Enter number : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}