//Q-2 Write a program which accpet the width and height of rectangular from user and calculate it area.
//(Area = width * height)
//Input  : 5.3 9.78
//Output : 51.834


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : RectArea
// Description    : Calculate rectangular area.
// Input          : Float , FLoat
// Output         : Double
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 28/10/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;
    
    dArea = fWidth * fHeight;

    return dArea;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to accpet the width and height of rectangular from user and calculate it area.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width : ");
    scanf("%f", &fValue1);

    printf("Enter height : ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);
    printf("Area of Rectangle is : %f\n",dRet);

    return 0;
}