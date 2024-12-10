/* 
Q-4 Write a Recursive program which accept number from user and return its factorial.
    Input : 5
    Output: 120
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Fact
// Description    : Return factorial.
// Input          : Integer
// Output         : Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 10/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Fact(int iNo)
{
    static int iMulti = 1;
    if(iNo != 0)
    {
        iMulti *=  iNo;
        iNo--;
        Fact(iNo);
    }   
    return iMulti;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application accept number from user and return its factorial.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Fact(iValue);
    printf("%d",iRet);

    return 0;
}