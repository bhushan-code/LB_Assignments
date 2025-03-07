/* 
Q-5 Write a Recursive program which display below pattern.
    Input : 5
    Output: a   b   c   d   e
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
    static char ch = 'a';
    
    if(iNo >= 1)
    {
        printf("%c\t",ch);
        ch++;
        iNo--;
        Display(iNo);
    }  
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will display pattern as asked.
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