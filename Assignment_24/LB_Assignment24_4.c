//Q-4 Accept the number of rows and colums from user and display below pattern.
//Input  : iRow = 4     iCol = 4
//Output : 
//          *   *   *   *   *   *
//          *   *               *
//          *       *           *
//          *           *       *
//          *               *   *
//          *   *   *   *   *   *


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Pattern
// Description    : Display pattern
// Input          : Integer, Integer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 19/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow || j == 1 || j == iCol)
            {
                printf("*\t");
            }
            else if(i == j)
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is accept the number from user and display pattern.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter the number of columns : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}