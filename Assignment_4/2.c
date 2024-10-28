//Q-2 Write a program which accpet number from user and display its factors in decreasing order.
//Input  : 12
//Output : 6    4   3   2   1


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : FactRev
// Description    : Display its factors in decreasing order.
// Input          : Integer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 25/10/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0;
    for(iCnt = iNo/2; iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to Accept a number and display its factors in decreasing order.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    FactRev(iValue);    

    return 0;
}