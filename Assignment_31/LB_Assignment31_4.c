/*
Q-4 Write the program which accept string from user and copy character of 
that string into anather string by converting all capital case characters into small case.
Input     :  "Marvellous Python 2"
Output    :  "marvellous python 2"
*/


#include<stdio.h>


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : StrCpySmall
// Description    : Copy string into anather string by converting all capital case characters into small case.
// Input          : Pointer, Pointer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 03/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrCpySmall(char *ch, char *bh)
{
    int i = 0, j =0;

    while(ch[i] != '\0')
    {
        if(ch[i] >= 'A' && ch[i] <= 'Z')
        {
            bh[j] = ch[i]+32;
        }
        else
        {
            bh[j] = ch[i];
        }
        j++;
        i++;
    }

   bh[j] = '\0';
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept string and copy character of that string in anather by converting all capital 
//case characters into small case.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30] = "Marvellous Python 2";
    char Brr[30];

    StrCpySmall(Arr, Brr);

    printf("%s\n",Arr);

    printf("%s\n",Brr);

    return 0;
}