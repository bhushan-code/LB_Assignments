/*
Q-2 Write a program which accept the string from user and accept one character, return frequency of that charcter.
Input     : "Marvellous Multi OS"
          :  M
Output    :  2
*/


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : CountChar
// Description    : Return frequency of that charcter.
// Input          : Pointer, Character
// Output         : Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 26/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountChar(char *str, char ch)
{
    int iCount = 0;

    if(*str == '\0')
    {
        return -1;
    }

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }
    return  iCount;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept the string from user and Return frequency of that charcter.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    int iRet = 0;
    char ch = '\0';

    printf("Please enter String : ");
    scanf("%[^'\n']s",Arr);

    printf("Please enter String : ");
    scanf(" %c",&ch);

    iRet = CountChar(Arr,ch);
    
    printf("Count of %c is : %d",ch, iRet);
       
    return 0;
}