/*
Q-1 Write a program which accept the string from user and count number of capital characters.
Input     : "Marvellous Multi OS"
Output    :  4
*/


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : CountCapital
// Description    : Count number of capital characters.
// Input          : Pointer
// Output         : Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 21/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountCapital(char *str)
{
    int iCap = 0, iCnt = 0;

    if(str[0] == '\0')
    {
        return 0;
    }

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] >= 'A' && str[iCnt] <= 'Z')
        {
            iCap++;
        }
        iCnt++;
    }
    return iCap;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept the string from user and count number of capital characters.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Please enter String : ");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);
    printf("Total capital letters are : %d",iRet);
    
    return 0;
}