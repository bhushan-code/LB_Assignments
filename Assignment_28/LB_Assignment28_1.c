/*
Q-1 Write a program which accept the string from user and convert it into lower case.

Input     : "Marvellous Multi OS"
Output    : "marvellous multi os"
*/


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : strlwrX
// Description    : Convert string in lower case.
// Input          : Pointer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 26/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void strlwrX(char *str)
{
    int iCnt = 0;

    if(str[0] == '\0')
    {
        return;
    }

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] >= 'A' && str[iCnt] <= 'Z')
        {
            str[iCnt] = str[iCnt] + 32;
        }
        iCnt++;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept the string from user and convert it into lower case.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];

    printf("Please enter String : ");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);

    printf("%s\n",Arr);

    return 0;
}