/*
Q-2 Write the program which accept string from user and copy character of 
that string into anather string by removing all white spaces.
Input     :  "Marv ellous Pyt hon"
Output    :  "MarvellousPython"
*/


#include<stdio.h>


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : StrCpyX
// Description    : Copy string into anather string by removing all white spaces.
// Input          : Pointer, Pointer
// Output         : -
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 03/12/2024
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrCpyX(char *ch, char *bh)
{
    int i = 0, j =0;

    while(ch[i] != '\0')
    {
        if(ch[i] != ' ')
        {
            bh[j] = ch[i];
            j++;
        }
        i++;
    }

   bh[j] = '\0';
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//This application will accept string and copy character of that string in anather by removing white spaces.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30] = "Marve llous Py thon";
    char Brr[30];

    StrCpyX(Arr, Brr);

    printf("%s\n",Arr);

    printf("%s\n",Brr);

    return 0;
}