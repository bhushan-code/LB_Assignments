/*
Q-2 Write a program which accept the string from user and convert it into upper case.

Input     : "Marvellous Multi OS"
Output    : "MARVELLOUS MULTI OS"
*/


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : strupX
// Description    : Convert string in upper case.
// Input          : Pointer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 26/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void strupX(char *str)
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
        iCnt++;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept the string from user and convert it into upper case.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];

    printf("Please enter String : ");
    scanf("%[^'\n']s",Arr);

    strupX(Arr);

    printf("%s\n",Arr);

    return 0;
}