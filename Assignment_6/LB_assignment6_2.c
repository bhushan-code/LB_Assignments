//Q-2 Accept a single digit and print it into word
//Input  : 9
//Output : Nine

//Input  : 12
//Output : Invalid output


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Display
// Description    : Print single digit number into word
// Input          : Integer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 26/10/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    switch(iNo)
    {
        case(0):
            printf("Zero");
            break;
        case(1):
            printf("One");
            break;
        case(2):
            printf("Two");
            break;
        case(3):
            printf("Three");
            break;
        case(4):
            printf("Four");
            break;
        case(5):
            printf("Five");
            break;
        case(6):
            printf("Six");
            break;
        case(7):
            printf("Seven");
            break;
        case(8):
            printf("Eight");
            break;
        case(9):
            printf("Nine");
            break;
        default:
            printf("Invalid Number");
            break;

    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to Accept a single digit and print it into word.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}