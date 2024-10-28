//Q-4 Write a program which accpet the temperature in Farenheit and convert it into celcius.
//(1 celcius = (Farenheit - 32)*(5/9))
//Input  : 10
//Output : -12.2222


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : FhtoCs
// Description    : Convert Farenheit to celcius.
// Input          : float
// Output         : Double
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 28/10/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    double dConvert = 0.0;
    dConvert = (fTemp - 32) * (5.0/9.0);
    return dConvert;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to accpet the temperature in Farenheit and convert it into celcius.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Faherheit : ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);
    printf("Temperatur in Celcius is : %f\n",dRet);

    return 0;
}