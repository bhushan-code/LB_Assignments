/*
Q-4 Write a program which accept the string from user and display only digits from the string.

Input     : "marve89llous121"
Output    : 89121
*/


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : DisplayDigit
// Description    : Display only digits from the string.
// Input          : Pointer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 26/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayDigit(char *str)
{
    int iCnt = 0;

    if(str[0] == '\0')
    {
        return;
    }

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] >= '0' && str[iCnt] <= '9')
        {
            printf("%c",str[iCnt]);
        }
        iCnt++;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept the string from user and display only digits from the string.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];

    printf("Please enter String : ");
    scanf("%[^'\n']s",Arr);

    DisplayDigit(Arr);

    return 0;
}