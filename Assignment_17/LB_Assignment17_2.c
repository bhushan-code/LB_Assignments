//Q-2 Write the program which accept N numbers from user and Print numbers till given number.
//Input   :   5
//Output  :   1   2   3   4   5    


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Display
// Description    : Print numbers till given number.
// Input          : Integer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 16/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

//Time Complexity is O(n)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept N numbers and Print numbers till given number.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}