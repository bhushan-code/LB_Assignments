#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : ChkEven
// Description    : Check whether number is even or odd.
// Input          : Integer
// Output         : BOOL
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 21/10/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to Accept number from user and check whether number is even or odd.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        printf("Entered number is Even \n");
    }
    else
    {
        printf("Entered number is Odd \n");
    }

    return 0;
}
