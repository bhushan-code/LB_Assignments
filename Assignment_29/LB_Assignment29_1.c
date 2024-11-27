/*
Q-1 Write a program which accept the string from user and accept one character,
check whether that charcter is present in string or not.
Input     : "Marvellous Multi OS"
          :  e
Output    :  TRUE
*/


#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : ChkChar
// Description    : Check charcter is present in string or not.
// Input          : Pointer, Character
// Output         : bool
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 26/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkChar(char *str, char ch)
{
    bool bFlag = false;

    if(*str == '\0')
    {
        return bFlag;
    }

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return  bFlag;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept the string from user and Check charcter is present in string or not.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    bool bRet = false;
    char ch = '\0';

    printf("Please enter String : ");
    scanf("%[^'\n']s",Arr);

    printf("Please enter String : ");
    scanf(" %c",&ch);

    bRet = ChkChar(Arr,ch);

    if(bRet == true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    
    return 0;
}