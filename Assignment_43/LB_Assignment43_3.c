/* 
Q-3 Write a Recursive program which accept string from user and count small characters.
    Input : HE llo WOr lD
    Output: 5
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Small
// Description    : Count small characters.
// Input          : Pointer
// Output         : Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 10/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Small(char *str)
{
    static int iCount = 0;
    if(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCount++;
        }
        str++;
        Small(str);
    }
    return iCount;    
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application accept string from user and count small characters.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cArr[30];
    int iRet = 0;

    printf("Enter the String : ");
    scanf("%[^\n]s",cArr);

    iRet = Small(cArr);
    printf("%d",iRet);

    return 0;
}