//Q-1 Write a program which accpet the radius of circle form user and calculate its area. Consider valie of PI as 3.14.
//(Area = Pi* Radius*Radius)
//Input  : 5.3
//Output : 88.2026


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : CircleArea
// Description    : Calculate circle area.
// Input          : Float
// Output         : Double
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 28/10/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    float PI = 3.14f;
    double dArea = 0.0;
    
    dArea = PI * fRadius * fRadius;

    return dArea;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to accpet radius of circle form user and calculate its area.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius : ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);
    printf("Area of Circle is : %f\n",dRet);

    return 0;
}


//Time Complexity of Program : 0(1)