
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : PrintEven
// Description    : Print given number of even numbers on screen.
// Input          : Integer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 22/10/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    int iCnt = 0;
    
    // for(iCnt = 1; iCnt <= iNo*2; iCnt++)
    // {
    //     if(iCnt % 2 == 0)
    //     {
    //         printf("%d\t",iCnt);
    //     }
    // }
    for(iCnt = 2;  iNo > 0; iNo--)
    {
        printf("%d\t",iCnt);
        iCnt += 2;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to Accept number from user and print that number of even numbers on screen.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}