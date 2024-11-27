/*
Q-3 Write a program which accept the string from user and toggle the case.

Input     : "Marvellous Multi OS"
Output    : "mARVELLOUS mULTI os"
*/


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : strtoggleX
// Description    : Toggle the case.
// Input          : Pointer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 26/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void strtoggleX(char *str)
{
    int iCnt = 0;

    if(str[0] == '\0')
    {
        return;
    }

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] >= 'a' && str[iCnt] <= 'z')
        {
            str[iCnt] = str[iCnt] - 32;
        }
        else if(str[iCnt] >= 'A' && str[iCnt] <= 'Z')
        {
            str[iCnt] = str[iCnt] + 32;
        }
        iCnt++;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept the string from user and toggle the case.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];

    printf("Please enter String : ");
    scanf("%[^'\n']s",Arr);

    strtoggleX(Arr);

    printf("%s\n",Arr);

    return 0;
}