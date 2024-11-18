//Q-4 Write the program which accept N numbers from user and Print odd numbers upto N number.
//Input   :   18
//Output  :   1   3   5   7   9   11   13   16   17   


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : OddDisplay
// Description    : Print odd numbers upto N number.
// Input          : Integer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 16/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{

    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

//Time Complexity is O(n)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept N numbers and Print odd numbers upto N number.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}