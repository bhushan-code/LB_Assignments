//Q-5 Write the program which accept N numbers from user and Print first 5 multiple of N number.
//Input   :   5
//Output  :   5   10   15   20   25    


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : MultipleDisplay
// Description    : Print first 5 multiple of N number
// Input          : Integer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 16/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t",(iNo*iCnt));
    }
}

//Time Complexity is O(n)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept N numbers and Print first 5 multiple of N number
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}