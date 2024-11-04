//Q-1 Write the program which accept range from user and display all number in between that range in reverse
// Input  :  23   35
// Output :  35  34  33  32  31  30  29  28  27  26  25  24  23


#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : RangeDisplayRev
// Description    : Display all number in between range in reverse
// Input          : Integer, Integer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 30/10/2024
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////

void RangeDisplayRev(int iStart,int iEnd)
{
    if(iStart <= iEnd)
    {
        int iCnt = 0;
        for(iCnt = iEnd; iCnt >= iStart; iCnt--)
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
// This application which accept range from user and display all number in between that range in reverse.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending point : ");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}