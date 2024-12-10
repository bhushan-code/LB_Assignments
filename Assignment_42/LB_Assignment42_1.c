/* 
Q-1 Write a Recursive program which accept number from user and display below pattern.
    Input : 5
    Output: 5   *   4   *   3   *   2   *   1   *
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Display
// Description    : Display Pattern.
// Input          : Integer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 10/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo >= 1)
    {
        printf("%d\t",iNo);
        printf("*\t");
        iNo--;
        Display(iNo);
    }        
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept number from user and display below pattern.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    
    printf("Enter the number : ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}