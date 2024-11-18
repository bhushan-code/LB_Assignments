//Q-3 Write the program which accept N numbers from user and Print its numbers line.
//Input   :   5
//Output  :   -5   -4   -3   -2   -1   0   1   2   3   4   5    


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Display
// Description    : Print numbers line of given number.
// Input          : Integer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 16/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{

    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

//Time Complexity is O(n)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept N numbers and Print its numbers line.
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