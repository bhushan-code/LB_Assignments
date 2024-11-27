/*
Q-4 Write a program which accept the string from user and accept one character, Return the index of last
occurrence of that character.
Input     : "Marvellous Multi OS"
          :  M
Output    :  11
*/


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : LastChar
// Description    : Return the index of last occurrence.
// Input          : Pointer, Character
// Output         : Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 26/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int LastChar(char *str, char ch)
{
    int iCnt = 0;

    if(str[0] == '\0')
    {
        return -1;
    }

    while(str[iCnt] != '\0')
    {
        iCnt++;      
    }

    while(iCnt >= 0)
    {
        if(str[iCnt] == ch)
        {
            break;
        }
        iCnt--;
    }

    if(iCnt < 0)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept the string from user and return the index of last occurrence.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    int iRet = 0;
    char ch = '\0';

    printf("Please enter String : ");
    scanf("%[^'\n']s",Arr);

    printf("Please enter charchater : ");
    scanf(" %c",&ch);

    iRet = LastChar(Arr,ch);
    
    printf("Index of last occurance of %c is : %d",ch, iRet);
       
    return 0;
}