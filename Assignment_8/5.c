//Q-5 Write a program which accpet the area in square feet and convert it into square meter.
//(1 square feet = 0.0929 Square meter)
//Input  : 5
//Output : 0.464515


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : SquareMeter
// Description    : Convert square feet into square meter.
// Input          : Integer
// Output         : Double
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 28/10/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double SquareMeter(int iValue)
{
    double dConvert = 0.0;
    dConvert = (iValue * 0.0929);
    return dConvert;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to accpet the area in square feet and convert it into square meter.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);
    printf("Area in Square meter is : %lf\n",dRet);

    return 0;
}