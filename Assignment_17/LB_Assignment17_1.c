//Q-1 Write the program which accept N numbers from user and print that number of $ and *.
//Input   :   5
//Output  :   $    *    $    *    $    *    $    *    $    *    


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Pattern
// Description    : Display Pattern.
// Input          : Integer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 16/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$   *\t");
    }
}

//Time Complexity is O(n)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application which accept N numbers and print  that number of $ and *.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}

