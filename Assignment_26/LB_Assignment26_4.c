/*
Q-4 Accept character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *)

Input     : %
Output    : TRUE

Input     : d
Output    : FALSE
*/


#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : CHkSpecial
// Description    : Check given character is special symbol or not.
// Input          : Character
// Output         : BOOL
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 21/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


bool CHkSpecial(char chX)
{
    if(chX >= 33 && chX <= 47 || chX >= 58 && chX <= 64)
    {
        return true;
    }
    else
    {
        return false;
    }

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application will Check given character is special symbol or not.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Please enter the character : \n");
    scanf("%c",&ch);

    bRet = CHkSpecial(ch);

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