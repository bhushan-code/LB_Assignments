#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Display
// Description    : Display first number in second number of times.
// Input          : Integer, Integer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 21/10/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for(iCnt = 1; iCnt<=iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to Accept two numbers from user and display first number in second number of times.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iCount = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);


    printf("Enter frequency : ");
    scanf("%d",&iCount);

    Display(iValue, iCount);

    return 0;
}