/* 
Q-3 Write a Recursive program which accept string from user and count number of characters.
    Input : Hello
    Output: 5
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : StrlenX
// Description    : Return number of characters.
// Input          : Pointer
// Output         : Integer
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 10/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int StrlenX(char *str)
{
    static int iCount = 0;
    if(*str != '\0')
    {
        iCount++;
        str++;
        StrlenX(str);
    }
    return iCount;        
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application accept string from user and count number of characters.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iRet = 0;
    char cArr[20];

    printf("Enter the String : ");
    scanf("%[^\n]s",cArr);

    iRet = StrlenX(cArr);
    printf("%d\n",iRet);

    return 0;
}