//Q-2 Write the program which accept range from user and display all even number in between that range
// INput  : 23	35
// Output :	24	26	28	30	32	34


#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : RangeDisplayEven
// Description    : Display all even number in between range
// Input          : Integer, Integer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 30/10/2024
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////


void RangeDisplayEven(int iStart,int iEnd)
{
    if(iStart <= iEnd)
    {
        int iCnt = 0;
        
        if(iStart % 2 != 0)
        {
            iStart++;
        }

        for(iCnt = iStart; iCnt <= iEnd; iCnt += 2)
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
// This application which accept range from user and display all even number in between that range.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending point : ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}