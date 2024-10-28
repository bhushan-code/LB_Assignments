//Q-1 Write a program which accpet the number from user and if number is less than 50 then print small,
//if it is greater than 50 and less than 100 print medium, 
//if it is greater than 100 then print large.
//Input  : 75
//Output : Medium


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Number
// Description    : Display size of number like Small/Medium/Large
// Input          : Integer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 26/10/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small");
    }
    else if(iNo >= 50 && iNo < 100)
    {
        printf("Medium");
    }
    else if(iNo >= 100)
    {
        printf("Large");
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to accpet the number from user and Display size of number like Small/Medium/Large.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}