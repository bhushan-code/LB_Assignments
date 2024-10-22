//Accept one number and print that number of * on screen


#include<stdio.h>


///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Accept
// Description    : It is used to print that number of * on screen
// Input          : Integer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 19/10/2024
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
} 

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to Accept one number and print that number of * on screen
//
///////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Accept(iValue);
    return 0;
}