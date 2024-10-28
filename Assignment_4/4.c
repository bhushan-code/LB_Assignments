//Q-4 Write a program which accpet number from user and return sum all its non factors.
//Input  : 12
//Output : 5    7   8   9   10  11


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : SumNonFact
// Description    : Get sum of all its non factors.
// Input          : Integer
// Output         : Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 25/10/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int Ans = 0;
    int iCnt = 0;
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            Ans = Ans + iCnt;
        }
    }

    return Ans;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to Accept a number and display all its non factors.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);  

    printf("%d",iRet);

    return 0;
}