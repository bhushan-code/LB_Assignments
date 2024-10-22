
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Check
// Description    : It is used to heck whether it is divisible by 5 or not.
// Input          : Integer
// Output         : BOOLEAN
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 19/10/2024
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
} 

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to Accept one number and check whether it is divisible by 5 or not.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }

    return 0;
}