//Q-2 Accept the number of rows and colums from user and display below pattern.
//Input  : iRow = 4     iCol = 5
//Output : 
//          2   4   6   8   10
//          1   3   5   7   9
//          2   4   6   8   10
//          1   3   5   7   9
 

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Pattern
// Description    : Display pattern
// Input          : Integer, Integer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 18/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCnt = 1;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 == 0)
        {
            iCnt = 1;
        } 
        else
        {
            iCnt = 2;
        }
        for(j = 1; j <= iCol; j++)
        {        
            printf("%d\t",iCnt);
            iCnt+=2;
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