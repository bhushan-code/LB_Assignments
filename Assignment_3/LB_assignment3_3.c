
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : DisplayEvenFactor
// Description    : Print even factors of that number.
// Input          : Integer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 22/10/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iCnt % 2 == 0 && iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);            
        }   
    }

    if(iNo % 2 == 0)
    {
        printf("%d\t",iNo);                     //Every number is there own factor
    }                                        
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to Accept number from user and print even factors of that number.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return 0;
}
