/* 
Q-1 Write a Recursive program which accept string from user and count white spaces.
    Input : HE llo WOr lD
    Output: 3
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : WhiteSpace
// Description    : Count white spaces.
// Input          : Pointer
// Output         : Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 10/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int WhiteSpace(char *str)
{
    static int iCount = 0;
    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
        WhiteSpace(str);
    }
    return iCount;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application accept string from user and count white spaces.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cArr[30];
    int iRet = 0;

    printf("Enter the String : ");
    scanf("%[^\n]s",cArr);

    iRet = WhiteSpace(cArr);
    printf("%d",iRet);

    return 0;
}