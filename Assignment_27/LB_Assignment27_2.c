/*
Q-2 Write a program which accept the string from user and count number of small characters.
Input     : "Marvellous"
Output    :  9
*/


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : CountSmall
// Description    : Count number of small characters.
// Input          : Pointer
// Output         : Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 21/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountSmall(char *str)
{
    int iSmall = 0, iCnt = 0;

    if(str[0] == '\0')
    {
        return 0;
    }

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] >= 'a' && str[iCnt] <= 'z')
        {
            iSmall++;
        }
        iCnt++;
    }
    return iSmall;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept the string from user and count number of small characters.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Please enter String : ");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmall(Arr);
    printf("Total capital letters are : %d",iRet);
    
    return 0;
}