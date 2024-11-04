//Q-1 Write the program which accept which accept number from user and display its digits in reverse order.
// Input  :  2395
// Outout :  5
//           9
//           3
//           2


#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : DisplayDigit
// Description    : Display digit of givrn number in reverse order
// Input          : Integer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 30/10/2024
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iRem = 0;

    while(iNo > 0)
    {
        iRem = iNo % 10;
        printf("%d\n",iRem);
        iNo = iNo/10;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept range from user and display its digits in reverse order.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;

    printf("Enter number : ");
    scanf("%d",&iValue1);

    DisplayDigit(iValue1);

    return 0;
}