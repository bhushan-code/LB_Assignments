/*
Q-4 Write a program which accept the string from user and check whether it contain vowels in it or not.
Input     : "MarvellouS"
Output    :  TRUE
*/


#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : ChkVowel
// Description    : Check whether string contain vowels in it or not
// Input          : Pointer
// Output         : BOOL
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 21/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkVowel(char *str)
{
    int iCnt = 0;
    bool bFlag = false;

   
    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == 'a' || str[iCnt] == 'i'|| str[iCnt] == 'e'|| str[iCnt] == 'o'|| str[iCnt] == 'u' 
        || str[iCnt] == 'A' || str[iCnt] == 'E'|| str[iCnt] == 'I'|| str[iCnt] == 'O'|| str[iCnt] == 'U')
        {
            bFlag = true;
            break;
        }
        iCnt++;
    }
    return bFlag;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept the string from user and check whether it contain vowels in it or not.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    bool bRet = false;

    printf("Please enter String : ");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowel(Arr);
    
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