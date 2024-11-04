//Q-1 Write the program which accept range from user and display all number in between that range
// Input  :  23   35
// Output :  23   24  25  26  27  28  29  30  31  32  33  34  35


#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : RangeDisplay
// Description    : Display all number in between range
// Input          : Integer, Integer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 30/10/2024
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////

void RangeDisplay(int iStart,int iEnd)
{
    if(iStart <= iEnd)
    {
        int iCnt = 0;
        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            printf("%d\t",iCnt);
        }
    }
    else 
    {
        printf("Invalid Range\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept range from user and display all number in between that range.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending point : ");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}