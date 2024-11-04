//Q-3 Write a program which accpet the distance in kilometer and convert it into meter.
//(1 kilometer = 1000 meter)
//Input  : 5
//Output : 5000


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : KMtoMeter
// Description    : Convert kilometer to meter.
// Input          : Integer
// Output         : Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 28/10/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int KMtoMeter(int iNo)
{
    int iMeter = 0;
    iMeter = iNo * 1000;
    return iMeter;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to accpet the distance in kilometer and convert it into meter.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance in kilometer : ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);
    printf("%d kilometer is %d meters \n",iValue, iRet);

    return 0;
}


//Time Complexity of Program : 0(1)