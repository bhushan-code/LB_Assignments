
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : DisplayConvert
// Description    : Convert case of that character
// Input          : Integer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 22/10/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayConvert(int cValue)
{
    if(cValue >= 97 && cValue <= 122)
    {
        cValue = cValue - 32;
        printf("%c\n", cValue);
    }
    else if(cValue >= 65 && cValue <= 97)
    {
        cValue = cValue + 32;
        printf("%c\n", cValue);
    }
                                    
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to Accept a character from user and convert case of that character.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    
    printf("Enter character : \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}