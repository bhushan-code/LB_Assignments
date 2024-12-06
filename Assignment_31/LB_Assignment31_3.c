/*
Q-3 Write the program which accept string from user and copy character of 
that string into anather string by converting all small case characters into capital case.
Input     :  "Marvellous Python 2"
Output    :  "MARVELLOUS PYTHON 2"
*/


#include<stdio.h>


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : StrCpyCap
// Description    : Copy string into anather string by converting all small case characters into capital case.
// Input          : Pointer, Pointer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 03/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrCpyCap(char *ch, char *bh)
{
    int i = 0, j =0;

    while(ch[i] != '\0')
    {
        if(ch[i] >= 'a' && ch[i] <= 'z')
        {
            bh[j] = ch[i]-32;
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
//This application will accept string and copy character of that string in anather by converting all small 
//case characters into capital case.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30] = "Marvellous Python 2";
    char Brr[30];

    StrCpyCap(Arr, Brr);

    printf("%s\n",Arr);

    printf("%s\n",Brr);

    return 0;
}