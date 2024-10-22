
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : CheckVow
// Description    : Check whether that character is vowel(a,e,i,o,u) or not.
// Input          : Character
// Output         : BOOLEAN
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 22/10/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckVow(char cValue)
{
    if(cValue == 'a'|| cValue == 'A')
        {
            return TRUE;
        }
    else if(cValue == 'e'|| cValue == 'E')
        {
            return TRUE;
        }
    else if(cValue == 'i'|| cValue == 'I')
        {
            return TRUE;
        } 
    else if(cValue == 'o'|| cValue == 'O')
        {
             return TRUE;
        }
    else if(cValue == 'u'|| cValue == 'U')
        {   
            return TRUE;
        }
    else
        {   
            return FALSE;
        }
                                    
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to Accept a character from user and check whether that character is vowel(a,e,i,o,u) or not.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    
    printf("Enter a Character : \n");
    scanf("%c",&cValue);

    bRet = CheckVow(cValue);

    if(bRet == TRUE)
    {
        printf("Character is Vowel \n");
    }
    else
    {
        printf("Character is not Vowel \n");
    }

    return 0;
}