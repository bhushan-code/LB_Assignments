//Q-1 Write a program which accpet the number from user and Display below output.
//Input  : 5
//Output : *       *       *       *       *       #       #       #       #       #


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Display
// Description    : Display special character output
// Input          : Integer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 27/10/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = - iNo;
    }
    int iCnt =0;
    for(iCnt =1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
    for(iCnt =1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to accpet the number from user and Display special character output.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    
    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}