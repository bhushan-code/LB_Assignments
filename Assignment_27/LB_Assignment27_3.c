/*
Q-3 Write a program which accept the string from user and return the difference between of small characters
and capital characters.
Input     : "MarvellouS"
Output    :  6  (8-2)
*/


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Difference
// Description    : Return difference between of small characters and capital characters.
// Input          : Pointer
// Output         : Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 21/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iSmall = 0, iCap = 0, iCnt = 0;

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
        else if(str[iCnt] >= 'A' && str[iCnt] <= 'Z')
        {
            iCap++;
        }
        iCnt++;
    }
    return iSmall-iCap;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept the string from user and return the difference between of small characters
//and capital characters.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Please enter String : ");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);
    printf("Total capital letters are : %d",iRet);
    
    return 0;
}