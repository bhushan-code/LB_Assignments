//Q-5 Write the program which accept number from the user and display its table in reverse order
//Input  : 2
//Output : 20      18      16      14      12      10      8       6       4       2


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : TableRev
// Description    : Display table of given number in reverse order.
// Input          : Integer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 26/10/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void TableRev(int iNo)
{
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iTable = 0;
    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        iTable = iNo * iCnt;
        printf("%d\t",iTable);
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to Accept a number and display its table in reverse order.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    
    printf("Enter number : ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}