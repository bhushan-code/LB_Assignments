/*
Q-5 Write a program which accept the string from user and reverse that string in place.
Input     : "abcd"
Output    : "dcba"
*/


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : StrRevX
// Description    : Reverse that string in place.
// Input          : Pointer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 26/11/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrRevX(char *str)
{
    //lenght
    char *iStart = str;
    char *iEnd = str;
    char cTemp = '\0';

    while(*iEnd != '\0')
    {
        iEnd++;
    }
    iEnd--;

    while(iStart < iEnd)
    {
        cTemp = *iStart;
        *iStart = *iEnd;
        *iEnd = cTemp;
        iStart++;
        iEnd--;
    }

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept the string from user and Reverse that string in place.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];

    printf("Please enter String : ");
    scanf("%[^'\n']s",Arr);

    StrRevX(Arr);
    
    printf("Modified string is : %s", Arr);
       
    return 0;
}
