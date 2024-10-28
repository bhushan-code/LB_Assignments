//Q-4 Write the program which accept number from the user and display its table.
//Input  : 2
//Output : 2       4       6       8       10      12      14      16      18      20


#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Table
// Description    : Display table of given number.
// Input          : Integer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 26/10/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Table(int iNo)
{
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iTable = 0;
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iTable = iNo * iCnt;
        printf("%d\t",iTable);
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to Accept a number and display its table.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}