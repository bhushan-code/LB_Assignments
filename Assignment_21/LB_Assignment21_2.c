//Q-2 Accept the number of rows and colums form user and display below pattern.
//Input  : iRow = 4     iCol = 4
//Output : 
//         A    B   C   D
//         a    b   c   d
//         A    B   C   D
//         a    b   c   d
 
 
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
    int i = 0, j = 0;
    char chCap = 'A', chSmall = 'a';
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, chCap = 'A', chSmall = 'a'; j <= iCol; j++)
        {
            if(i % 2 != 0)
            {
                printf("%c\t",chCap);
            }
            else
            {
                printf("%c\t",chSmall);
            }

            chCap++;
            chSmall++;
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