//Q-5 Write a program which accpet number from user and return difference bet sum of all its factor and non factor
//Input  : 12
//Output : 5    7   8   9   10  11


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : FactDiff
// Description    : Get difference bet sum of all its factor and non factor.
// Input          : Integer
// Output         : Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 25/10/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int NonFactAdd = 0;
    int FactAdd = 0;
    int iCnt = 0;


    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            NonFactAdd = NonFactAdd + iCnt;
        }
        if(iNo % iCnt == 0)
        {
            FactAdd = FactAdd + iCnt;
        }
    }
    return (FactAdd-NonFactAdd);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to Accept a number and display difference bet sum of all its factor and non factor.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);  

    printf("%d",iRet);

    return 0;
}